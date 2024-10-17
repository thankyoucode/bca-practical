<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="DetailView.aspx.cs" Inherits="GridAndDetailView.DetailView" %>

    <!DOCTYPE html
        PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

    <html xmlns="http://www.w3.org/1999/xhtml">

    <head runat="server">
        <title>Detail Friend Info</title>
    </head>

    <body>
        <form id="form1" runat="server">
            <asp:DetailsView ID="FriendData" runat="server" Height="50px" Width="125px" AllowPaging=true
                PagerSettings-Mode=NextPrevious PagerSettings-PreviousPageText="Previous-Record"
                PagerSettings-NextPageText="Next-Record" OnPageIndexChanging="UpdateView_FriendData" />
        </form>
    </body>

    </html>