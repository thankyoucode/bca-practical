<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Home.aspx.cs" Inherits="MoreWebForm.Home" %>
  <!DOCTYPE html>
  <html xmlns="http://www.w3.org/1999/xhtml">

  <head runat="server">
    <title>Hello My Web</title>
    <link rel="stylesheet" href="./style.css">
  </head>

  <body>
    <header>
      <nav>
        <ul>
          <li><a href="/Home.aspx">Home</a></li>
          <li><a href="/TestProgram.aspx">Test Program</a></li>
        </ul>
      </nav>
    </header>
    <main>
      <h3>Hello I am Kishan</h3>
      <p>Programming in C# is similar to programming in java</p>
      <p>Something like Microsoft created own java as C#</p>
      <form id="ProgramForm" runat="server">
        <p>Q - DotNet is programming language ?</p>
        <asp:Button runat="server" class="btn" Text="Yes" onclick="checkOptionYes"></asp:Button>
        <asp:Button runat="server" class="btn" Text="No" onclick="checkOptionNo"></asp:Button>
        <asp:TextBox ID="Result" runat="server" class="input" Text="Waiting for your choice." Width="100%">
        </asp:TextBox>
      </form>
    </main>
    <footer>
      <p>&copy; All rights reserved 2024</p>
    </footer>
  </body>

  </html>