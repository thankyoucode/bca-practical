<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Index.aspx.cs" Inherits="BasicBackend.Index" %>

  <!DOCTYPE html
    PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

  <html xmlns="http://www.w3.org/1999/xhtml">

  <head runat="server">
    <title>Todo List</title>
  </head>

  <body>
    <form id="todoform" runat="server">
      <div>
        <h1>Todo list</h1>
          <input id="TodoText" runat="server" type="text" />
          <asp:Button ID="NewTodoBtn" runat="server" Text="New Todo" OnClick="newTodo" />
          <asp:Button ID="ClearTodoBtn" runat="server" Text="Clear All" OnClick="clearTodo" />
          <asp:CheckBoxList ID="TodoList" runat="server" />
      </div>
    </form>
  </body>

  </html>