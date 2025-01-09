<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="HelloDelegate.aspx.cs" Inherits="DelegateAddSub.HelloDelegate" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>My Delegate</title>
</head>
<body>
    <form id="form1" runat="server">
        Number1: <input id="n1" runat="server" type="text" /><br />
        Number2: <input id="n2" runat="server" type="text" /><br />
        <asp:Button runat="server" Text="Calculate" onClick="LetsGo" />
    </form>
</body>
</html>
