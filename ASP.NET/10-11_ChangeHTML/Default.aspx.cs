using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class _Default : Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        // This method can be used to initialize data or set up the page if needed
    }

    // add item to both 
    protected void ButtonAdd_Click(object sender, EventArgs e)
    {
        string item = TextBox1.Text.Trim();

        // find that item is exist or not   
        bool itThere = DropDownList1.Items.FindByText(item) == null;

        // not exist >> add to both
        if (itThere)
        {
            DropDownList1.Items.Add(item);
            ListBox1.Items.Add(item);
        }

        TextBox1.Text = string.Empty;
    }

    // remove item to both 
    protected void ButtonRemove_Click(object sender, EventArgs e)
    {
        string item = TextBox1.Text.Trim();

        bool itThere = DropDownList1.Items.FindByText(item) == null;

        if (!itThere)
        {
            DropDownList1.Items.Remove(item);
            ListBox1.Items.Remove(item);
        }

        TextBox1.Text = string.Empty;
    }

    protected void ButtonRemoveAll_Click(object sender, EventArgs e)
    {
        DropDownList1.Items.Clear();
        ListBox1.Items.Clear();
        TextBox1.Text = string.Empty;
    }
}


















