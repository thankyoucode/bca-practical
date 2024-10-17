<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="TreeView.aspx.cs" Inherits="TreeView.TreeView" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html>
<head>
    <title>My Working points</title>
</head>
<body>
    <form runat="server">
    <div>
        <asp:TreeView runat="server">
            <Nodes>
                <asp:TreeNode Text="My work">
                    <asp:TreeNode Text="College">
                        <asp:TreeNode Text="Read subject note" />
                        <asp:TreeNode Text="Write Journal" />
                    </asp:TreeNode>
                    <asp:TreeNode Text="Home">
                        <asp:TreeNode Text="Design more content for e-commerce web site" />
                        <asp:TreeNode Text="Create usefull project in python" />
                    </asp:TreeNode>
                </asp:TreeNode>
            </Nodes>
        </asp:TreeView>
    </div>
    </form>
</body>
</html>
