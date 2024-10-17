using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.Sql;
using System.Data.SqlClient;

public partial class Home : Page {

    Dictionary<String, String> field;
    String[] fieldSelf = { "rollnumber", "sem", "firstname", "lastname", "phonenumber", "dob", "gender", "hobby", "email", "password" };

    String connStr = @"Data Source=.\SQLEXPRESS;AttachDbFilename=E:\00_College_Education\05_SEM\506_CSharp_DotNet_Practical\01_try_from_homes\21_DatabaseOperation\App_Data\DevDb.mdf;Integrated Security=True;User Instance=True";

    protected void Page_Load(object sender, EventArgs e) {
        using (SqlConnection conn = new SqlConnection(connStr)) {

            String query = "SELECT * FROM studentinfo;";

            using (SqlCommand cmd = new SqlCommand(query, conn)) {
                conn.Open();
                SqlDataReader dr = cmd.ExecuteReader();
                String resultHtml = "<table> <tr><th>Roll Number</th><th>Semester</th><th>Frist Name</th><th>Last Name</th><th>Phone No.</th><th>BirthDate</th><th>Gender</th><th>Hobby</th><th>Email</th><th>Password</th></tr>";
                while (dr.Read()) {
                    resultHtml += "<tr>";
                    foreach (String afield in fieldSelf) {
                        resultHtml += "<td>" + dr[afield] + "</td>";
                    }
                    resultHtml += "</tr>";
                }
                resultHtml += "</table>";
                DataList.InnerHtml = resultHtml;
                conn.Close();
            }
        }
    }

    protected void getForm(object sender, EventArgs e) {
        if (IsPostBack) {
            // Retrieve form data using Request.Form
            field = new Dictionary<String, String>{
                {"rollnumber", Request.Form["rollnumber"]},
                {"sem", Request.Form["sem"]},
                {"firstname", Request.Form["firstname"]},
                {"lastname", Request.Form["lastname"]},
                {"phonenumber", Request.Form["phonenumber"]},
                {"dob", Request.Form["dob"]},
                {"gender", Request.Form["gender"]},
                {"hobby", ""},
                {"email", Request.Form["email"]},
                {"password", Request.Form["password"]}
            };

            DateTime birthDateForm;
            if (DateTime.TryParse(field["dob"], out birthDateForm)) {
                field["dob"] = birthDateForm.ToString("yyyy-MM-dd");
            }

            // Retrieve hobbies (checkbox values)
            var hobbies = new System.Text.StringBuilder();
            if (Request.Form["hobby1"] != null) hobbies.Append(Request.Form["hobby1"] + ", ");
            if (Request.Form["hobby2"] != null) hobbies.Append(Request.Form["hobby2"] + ", ");
            if (Request.Form["hobby3"] != null) hobbies.Append(Request.Form["hobby3"] + ", ");
            if (hobbies.Length > 0) hobbies.Length -= 2;
            field["hobby"] = hobbies.ToString();
        }
    }
    
    protected void AddData(object sender, EventArgs e) {
        this.getForm(sender, e);
        using (SqlConnection conn = new SqlConnection(connStr)) {
            String query = "INSERT INTO studentinfo Values (@rollnumber, @sem, @firstname, @lastname, @phonenumber, @dob, @gender, @hobby, @email, @password);";
            
            using (SqlCommand cmd = new SqlCommand(query, conn)) {
                foreach(String afield in fieldSelf) {
                    cmd.Parameters.AddWithValue(afield, field[afield]);
                }

                conn.Open();
                try {
                    cmd.ExecuteNonQuery();
                    resultDiv.InnerHtml = "<script>alert('Data is Added to database')</script>";
                } catch (Exception ex) {
                    resultDiv.InnerHtml = "<script>alert('Problem in adding data')</script>";    
                } finally {
                    conn.Close();
                }
            }
        }
    }

    protected void ShowData(object sender, EventArgs e) {
        this.getForm(sender, e);
        using (SqlConnection conn = new SqlConnection(connStr)) {
            String query = "SELECT * FROM studentinfo WHERE rollnumber=@rollnumber;";
            using (SqlCommand cmd = new SqlCommand(query, conn)) {
                cmd.Parameters.AddWithValue("rollnumber", field["rollnumber"]);
                
                conn.Open();
                try {
                    SqlDataReader dr = cmd.ExecuteReader();

                    if (dr.Read()) {
                        rollnumber.Value = dr["rollnumber"].ToString();
                        firstname.Value = dr["firstname"].ToString();
                        lastname.Value = dr["lastname"].ToString();
                        phonenumber.Value = dr["phonenumber"].ToString();
                        dob.Value = dr["dob"].ToString();
                        email.Value = dr["email"].ToString();
                        password.Value = dr["password"].ToString();
                    } else {
                        String resultHtml = "<script>alert('This data in not available')</script>";
                        resultDiv.InnerHtml = resultHtml;
                    }
                } catch (Exception ex) {
                    resultHtml = "<script>alert('Problem to fetching data')</script>";
                } finally {
                    conn.Close();
                }
            }
        }        
    }

    protected void UpdateData(object sender, EventArgs e) {
        this.getForm(sender, e);
        using (SqlConnection conn = new SqlConnection(connStr)) {
            String query = "UPDATE studentinfo SET sem=@sem, firstname=@firstname, lastname=@lastname, phonenumber=@phonenumber, dob=@dob, gender=@gender, hobby=@hobby, email=@email, password=@password WHERE rollnumber=@rollnumber;";
            using (SqlCommand cmd = new SqlCommand(query, conn)) {
                foreach(String afield in fieldSelf) {
                    cmd.Parameters.AddWithValue(afield, field[afield]);
                }

                conn.Open();
                try {
                    cmd.ExecuteNonQuery();
                    resultDiv.InnerHtml = "<script>alert('Data is Updated')</script>";
                } catch (Exception ex) {
                    resultDiv.InnerHtml = "<script>alert('Data is not updated, me be this record is not here')</script>";
                } finally {
                    conn.Close();
                }
            }
        }
    }
    protected void DeleteData(object sender, EventArgs e) {
        this.getForm(sender, e);
        using (SqlConnection conn = new SqlConnection(connStr)) {
            String query = "DELETE FROM studentinfo WHERE rollnumber=@rollnumber;";
            using (SqlCommand cmd = new SqlCommand(query, conn)) {
                cmd.Parameters.AddWithValue("rollnumber", field["rollnumber"]);
                
                conn.Open();
                try {
                    cmd.ExecuteNonQuery();
                    resultDiv.InnerHtml = "<script>alert('Data is Deleted')</script>";
                } catch (Exception ex) {
                    resultDiv.InnerHtml = "<script>alert('Data is not Deleted, me be this record is not here')</script>";
                } finally {
                    conn.Close();
                }
            }
        }
    }
}
