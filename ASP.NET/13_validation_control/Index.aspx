<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Index.aspx.cs" Inherits="ValidationControl.Index" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Enter valid data</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <h1>DEV News letter</h1>
        Name: <asp:TextBox ID="name" runat="server" />
        <asp:RequiredFieldValidator runat="server" ErrorMessage="Name is Required enter name" ControlToValidate="name"/><br />
        Email: <asp:TextBox ID="email" runat="server" TextMode="Email" />
        <asp:RegularExpressionValidator runat="server" ErrorMessage="Invalid email" ControlToValidate="email" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"/><br />
        Password: <asp:TextBox ID="pass" runat="server" TextMode="Password" />
        Re-enter Password: <asp:TextBox ID="pass2" runat="server" TextMode="Password" />
        <asp:CompareValidator runat="server" ErrorMessage="Password not match" ControlToValidate="pass2" ControlToCompare="pass"/><br />
        Phone No: <asp:TextBox ID="phone" runat="server" TextMode="Phone" />
        <asp:RegularExpressionValidator runat="server" ErrorMessage="Invalid Phone number" ControlToValidate="phone" ValidationExpression="[0-9]{10}"/><br />
        Number of letter in week: <asp:TextBox ID="lettercount" runat="server" TextMode="Number" />
        <asp:RangeValidator runat="server" ErrorMessage="Enter between 0 to 5" ControlToValidate="lettercount" MinimumValue="0" MaximumValue="5"/><br />
        <asp:Button ID="ButtonSubmit" runat="server" Text="Register" />    
    </div>
    </form>
</body>
</html>
