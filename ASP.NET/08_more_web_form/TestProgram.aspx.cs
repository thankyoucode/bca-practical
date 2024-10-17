using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace MoreWebForm {
    public partial class TestProgram : System.Web.UI.Page {
        protected void sumN(Object sender, EventArgs e) {
            try {
                UInt32 n = UInt32.Parse(N.Text);
                UInt64 sum = 0;
                for (UInt32 i = 1; i <= n; i++) { sum += i; }
                Result.Text = "" + sum;
            } catch (Exception Err) {
                Result.Text = "Please Enter valid number " + UInt32.MaxValue;
            }
        }
    }
}