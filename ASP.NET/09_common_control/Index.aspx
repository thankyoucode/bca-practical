<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Index.aspx.cs" Inherits="CommonControl.Index" %>

    <!DOCTYPE html
        PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

    <html xmlns="http://www.w3.org/1999/xhtml">

    <head runat="server">
        <title>Dev News Registration</title>
        <link rel="stylesheet" href="style.css">
    </head>

    <body>
        <form id="form1" runat="server">
            <div class="space-box">
                <h2>User Registration</h2>

                <asp:TextBox ID="name" runat="server" placeholder="Name" />
                <asp:TextBox ID="email" runat="server" TextMode="Email" placeholder="Email" />
                <asp:TextBox ID="pass" runat="server" TextMode="Password" placeholder="Password" />
                <div>
                    <asp:RadioButton ID="Male" runat="server" GroupName="Gender" Text="Male" />
                    <asp:RadioButton ID="Female" runat="server" GroupName="Gender" Text="Female" />
                </div>
                <div>
                    <asp:CheckBox ID="Newsletter" runat="server" Text="Subscribe to Newsletter" />
                </div>
                Date of Burth:
                <asp:Calendar ID="dob" runat="server" />
                <asp:Button ID="ButtonSubmit" runat="server" Text="Register" />
            </div>
        </form>
    </body>

    </html>