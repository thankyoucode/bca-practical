using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data;
using System.Data.SqlClient;
using System.Configuration;

namespace GridAndDetailView
{
    public partial class Index : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string connString = @"Data Source=.\SQLEXPRESS;AttachDbFilename=E:\00_College_Education\05_SEM\506_CSharp_DotNet_Practical\01_try_from_homes\19-20_grid_and_detail_view\GridAndDetailView\GridAndDetailView\App_Data\FriendDatabase.mdf;Integrated Security=True;User Instance=True";

            using(SqlConnection conn = new SqlConnection(connString)) {
               string query = "SELECT * FROM FriendData;";

               using (SqlDataAdapter da = new SqlDataAdapter(query, conn))
               {
                   DataTable dt = new DataTable();
                   da.Fill(dt);
                   FriendData.DataSource = dt;
                   FriendData.DataBind();
               }
            }
        }

        protected void InsertData(object sender, EventArgs e) {
            string connString = @"Data Source=.\SQLEXPRESS;AttachDbFilename=E:\00_College_Education\05_SEM\506_CSharp_DotNet_Practical\01_try_from_homes\19_grid_view\GridAndDetailView\GridAndDetailView\App_Data\FriendDatabase.mdf;Integrated Security=True;User Instance=True";

            using (SqlConnection conn = new SqlConnection(connString))
            {
                string query = "INSERT INTO FriendData (no, name, address) values('8', 'Jat Janak', 'Yaverpura'), ('29', 'Kishan', 'Sherpura'), ('70', 'Suthar Dasharath', 'Yaverpura'), ('71', 'Suthar Krunal', 'Sherpura');";

                using (SqlCommand cmd = new SqlCommand(query, conn))
                {
                    conn.Open();
                    cmd.ExecuteNonQuery();
                    conn.Close();
                }
            }
        }
    }
}