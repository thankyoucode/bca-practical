using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace OddEvenSum
{
    public partial class Index : System.Web.UI.Page
    {
               
        protected void Page_Load(object sender, EventArgs e)
        {
            int odd = 0, even = 0, n = 100;
            for (int i = 1; i <= n; i += 2) {
                odd += i;
                even += i + 1;
            }
            Response.Write("odd and even sum 1 to 100 <br />Odd: " + odd + "<br />Even: " + even);

            string[] players = { "Janak", "Kishan", "Krunal", "Dashrath" };
            Response.Write("<h1>Players list</h1><ul>");
            foreach (string player in players) {
                Response.Write("<li>" + player + "</li>");
            }
            Response.Write("</ul>");
        }
    }
}