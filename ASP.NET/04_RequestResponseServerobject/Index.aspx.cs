using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace BasicBackend
{
    public partial class Index : System.Web.UI.Page
    {
        protected void newTodo(object sender, EventArgs e) {
            String todo_task = Request["TodoText"];
            TodoText.Value = String.Empty;
            TodoList.Items.Add(todo_task);
        }
        protected void clearTodo(object sender, EventArgs e) {
            Response.Redirect("Index.aspx");
        }
    }
}