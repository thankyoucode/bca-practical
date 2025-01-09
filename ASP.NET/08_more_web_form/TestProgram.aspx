<!-- <%@ Page Language="C#" AutoEventWireup="true" CodeBehind="TestProgram.aspx.cs" Inherits="MoreWebForm.TestProgram" %> -->

<!DOCTYPE html
  PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head runat="server">
  <title>Test Program</title>
  <link rel="stylesheet" href="./style.css">
</head>

<body>
  <header>
    <ul>
      <li><a href="/Home.aspx">Home</a></li>
      <li><a href="/TestProgram.aspx">Test Program</a></li>
    </ul>
  </header>
  <main>
    <h1>Find the sum of N numbers</h1>
    <p>Starting from 1 and sum calculate to N. N also inculde to in sum</p>
    <p>N can be from: <code>4294967295 > N > 0 </code></p>
    <p>Enter <code>4294967295</code> for check your computer power :)</p>
    <form id="ProgramForm" runat="server">
      <asp:TextBox runat="server" id="N" placeholder="input" class="input"></asp:TextBox>
      <span> &xrArr; </span>
      <asp:TextBox runat="server" id="Result" placeholder="output" class="input"></asp:TextBox>
      <br />
      <asp:Button id="calc" runat="server" onClick="sumN" Text="Find Sum" class="btn"></asp:Button>

    </form>
  </main>
  <footer>
    <p>&copy; All rights reserved 2024</p>
  </footer>
</body>

</html>