using System;
using System.Web;
using System.Web.UI;
using MyHelper;

namespace UsingNamespaces
{
    public partial class Index : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Response.Write("Which is max 999 or 500/0.1<br>Max: ");
            Response.Write(Helper.max(999, 500/0.1));
        }
    }
}