using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data;
using System.Configuration;

public partial class Index : System.Web.UI.Page {
    private DataSet CreateDataSet() {
        DataSet ds = new DataSet();
        DataTable User = CreateUserTable();
        ds.Tables.Add(User);
        return ds;
    }

    private DataTable CreateUserTable() {
        DataTable User = new DataTable("User");
        Type dataType = Type.GetType("System.String");
        User.Columns.Add("ID", dataType);
        User.Columns.Add("Name", dataType);
        User.Columns.Add("Address", dataType);
        User.Columns.Add("Phone", dataType);

        AddNewUser(User, "USER23", "Kishan", "Sherpura", "1111111111");
        AddNewUser(User, "USER08", "Jat Janak", "Yaverpura", "2222222222");
        AddNewUser(User, "USER35", "Suthar Krunal", "Sherpura", "3333333333");
        AddNewUser(User, "USER34", "Suthar Dasharath", "Yaverpura", "4444444444");
        AddNewUser(User, "USER66", "Dave Subham", "Deesa", "5555555555");
        return User;
    }

    private void AddNewUser(DataTable table, String id, String name, String address, String phone) {
        DataRow newUser = table.NewRow();
        newUser["ID"] = id;
        newUser["Name"] = name;
        newUser["Address"] = address;
        newUser["Phone"] = phone;
        table.Rows.Add(newUser);
    }


    protected void Page_Load(object sender, EventArgs e) {
        DataSet ds = CreateDataSet();
        DataList.DataSource = ds.Tables["User"];
        DataList.DataBind();
    }    
}