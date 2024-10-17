<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Index.aspx.cs" Inherits="RichControl.Index" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Rich Control</title>
</head>
<body>
    <form runat="server">
        <asp:Calendar runat="server" />
        <asp:Wizard runat="server">
            <WizardSteps>
                <asp:WizardStep runat="server" Title="join us">
                Join us as team memmber and take some idea
                </asp:WizardStep>
                <asp:WizardStep runat="server" Title="create project">
                Create  project and help to world
                </asp:WizardStep>
            </WizardSteps>
        </asp:Wizard>
        <asp:MultiView runat="server">
            <asp:View runat="server">
            page 2
            </asp:View>
            <asp:View runat="server">
            page 3
            </asp:View>
        </asp:MultiView>
        <asp:Substitution runat="server" />
        <p>Thanks to use me</p>
    </form>
</body>
</html>