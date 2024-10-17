using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace MoreWebForm {
    public partial class Home : System.Web.UI.Page {
        protected void checkOptionYes(object sender, EventArgs e) {
            Result.Text = "Sorry, but you need to google!";
        }

        protected void checkOptionNo(object sender, EventArgs e) {
            Result.Text = "You are right, let's go with C#";
        }
    }
}