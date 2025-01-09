using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace DelegateAddSub
{
    public partial class HelloDelegate : System.Web.UI.Page
    {
        int sumVal, subVal, a, b;
        int Sum(int a, int b) { return a + b; }
        int Sub(int a, int b) { return a - b; }
        delegate int Globlecalc(int a, int b);
        Globlecalc Calc;
        protected void LetsGo(object sender, EventArgs e)
        {
            a = int.Parse(n1.Value);
            b = int.Parse(n2.Value);
            Calc = new Globlecalc(new HelloDelegate().Sum);
            sumVal = Calc(a, b);
            Calc = new Globlecalc(new HelloDelegate().Sub);
            subVal = Calc(a, b);
            Response.Write("Summation: " + sumVal + "<br /> Subtraction: " + subVal);
        }
    }
}