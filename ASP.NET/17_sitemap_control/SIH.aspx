<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="SIH.aspx.cs" Inherits="SitemapControl.SIH" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head>
    <title>Smart India Hackathon</title>
</head>
<body>
    <form id="form1" runat="server">
        <asp:SiteMapDataSource ID="SiteMapSourceSIH" runat="server" />  
        <asp:SiteMapPath ID="IndexSiteMap" runat="server" />
        <a href="Result.aspx">Result</a>
        <h1>SMART INDIA HACKATHON 2024</h1>
        <P>Welcome to solve world's problems</P>
        <P>Visit: https://sih.gov.in for problem statements </P>
    </form>
</body>
</html>
