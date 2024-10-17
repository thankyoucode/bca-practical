<!-- <%@ Page Language="C#" AutoEventWireup="true" CodeFile="Home.aspx.cs" Inherits="Home" %> -->

<!DOCTYPE html
  PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head runat="server">
  <title>Welcome Form for Developers</title>
  <link rel="stylesheet" href="style.css" />
</head>

<body class="oswald">
  <main>
    <h1>Welcome to Development web site</h1>
    <form id="form1" runat="server">
      <div>
        <div class="input-fild-data">
          <label>Roll Number</label>
          <input id="rollnumber" runat="server" type="text" />
        </div>

        <div class="input-fild-data">
          <label>Semester</label>
          <asp:DropDownList ID="sem" runat="server" class="input">
            <asp:ListItem Value="Sem-1">SEM 1</asp:ListItem>
            <asp:ListItem Value="Sem-2">SEM 2</asp:ListItem>
            <asp:ListItem Value="Sem-3">SEM 3</asp:ListItem>
            <asp:ListItem Value="Sem-4">SEM 4</asp:ListItem>
            <asp:ListItem Value="Sem-5">SEM 5</asp:ListItem>
            <asp:ListItem Value="Sem-6">SEM 6</asp:ListItem>
          </asp:DropDownList>
        </div>

        <div class="input-fild-data">
          <label>First Name</label>
          <input id="firstname" runat="server" type="text" />
        </div>
        <div class="input-fild-data">
          <label>Last Name</label>
          <input id="lastname" runat="server" type="text" />
        </div>
        <div class="input-fild-data">
          <label>Phone No.</label>
          <input id="phonenumber" runat="server" type="text" />
        </div>
        <div class="input-fild-data">
          <label>Birth Date</label>
          <input id="dob" runat="server" type="text" placeholder="YYYY-MM-DD" />
        </div>
        <div class="input-fild-data">
          <label>Gender</label>
          <div class="hoby-items">
            <p>
              <input id="male" runat="server" type="radio" name="gender" value="Male" checked /><span>Male</span>
            </p>
            <p>
              <input id="female" runat="server" type="radio" name="gender" value="Female" /><span>Female</span>
            </p>
          </div>
        </div>
        <div class="hoby-main input-fild-data">
          <label>Hobby</label>
          <div class="hoby-items">
            <p>
              <input id="hobby1" runat="server" type="checkbox" value="New Computer Technology" /><span>Knowing
                about new Computer technology</span>
            </p>
            <p>
              <input id="hobby2" runat="server" type="checkbox" value="Development" /><span>Development</span>
            </p>
            <p>
              <input id="hobby3" runat="server" type="checkbox" value="Getting new Things from Books" /><span>Getting
                new Things from
                Books</span>
            </p>
          </div>
        </div>
        <div class="input-fild-data">
          <label>E-Mail</label>
          <input id="email" runat="server" type="text" />
        </div>
        <div class="input-fild-data">
          <label>Password</label>
          <input id="password" runat="server" type="password" />
        </div>
        <div>
          <asp:Button runat="server" Text="Add" onclick="AddData" class="btn btn-submit" />
          <asp:Button runat="server" Text="Show" onclick="ShowData" class="btn btn-submit" />
          <asp:Button runat="server" Text="Update" onclick="UpdateData" class="btn btn-submit" />
          <asp:Button runat="server" Text="Delete" onclick="DeleteData" class="btn btn-submit" />
          <input type="reset" value="Reset" class="btn btn-reset" />
        </div>
      </div>
    </form>
    <div id="resultDiv" runat="server"></div>
    <div id="DataList" runat="server"></div>
  </main>
</body>

</html>