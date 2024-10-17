<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Index.aspx.cs"
Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
  <head>
    <title>Image selector</title>
  </head>
  <body>
    <form id="form1" runat="server">
      <asp:DropDownList
        ID="DropDownList1"
        runat="server"
        AutoPostBack="true"
        OnSelectedIndexChanged="DropDownList1_SelectedIndexChanged"
      >
        <asp:ListItem Value="python.jpg">Python</asp:ListItem>
        <asp:ListItem Value="java.png">Java</asp:ListItem>
        <asp:ListItem Value="csharp.png">C#</asp:ListItem>
        <asp:ListItem Value="javascript.png">JavaScript</asp:ListItem>
      </asp:DropDownList>
      <asp:Image ID="Image1" runat="server" Height="200px" Width="200px" />
    </form>
  </body>
</html>
