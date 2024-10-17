using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class _Default : System.Web.UI.Page {
    protected void Page_Load(object sender, EventArgs e) {
        Image1.ImageUrl = "./images/python.jpg";
    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e) {
        string selectedValue = DropDownList1.SelectedValue;

        Image1.ImageUrl = "./images/" + selectedValue;
    }
}