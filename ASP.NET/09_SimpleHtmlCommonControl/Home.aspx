<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Home.aspx.cs"
Inherits="Home" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
  <head runat="server">
    <title>Welcome Form for Developers</title>
    <link rel="stylesheet" href="style.css" />
  </head>
  <body>
    <main>
      <h1>Welcome to Development web site</h1>
      <form id="form1" runat="server">
        <div>
          <div class="input-fild-data">
            <label ID="Lable1" runat="server">First Name</label>
            <input id="firstName" runat="server" type="text" />
          </div>
          <div class="input-fild-data">
            <label ID="Lable2" runat="server">Last Name</label>
            <input id="lastName" runat="server" type="text" />
          </div>
          <div class="input-fild-data">
            <label ID="Lable8" runat="server">Birth Date</label>
            <input
              id="borthDate"
              runat="server"
              type="text"
              placeholder="YYYY-MM-DD"
            />
          </div>
          <div class="input-fild-data">
            <label ID="gender" runat="server">Gender</label>
            <div class="hoby-items">
              <p>
                <input
                  id="Radio1"
                  runat="server"
                  type="radio"
                  name="gender"
                  value="Male"
                /><span>Male</span>
              </p>
              <p>
                <input
                  id="Radio2"
                  runat="server"
                  type="radio"
                  name="gender"
                  value="Female"
                /><span>Female</span>
              </p>
            </div>
          </div>
          <div class="hoby-main input-fild-data">
            <label ID="hoby" runat="server">Hobby</label>
            <div class="hoby-items">
              <p>
                <input
                  id="Checkbox1"
                  runat="server"
                  type="checkbox"
                  value="New Computer Technology"
                /><span>Knowing about new Computer technology</span>
              </p>
              <p>
                <input
                  id="Checkbox2"
                  runat="server"
                  type="checkbox"
                  value="Development"
                /><span>Development</span>
              </p>
              <p>
                <input
                  id="Checkbox3"
                  runat="server"
                  type="checkbox"
                  value="Books"
                /><span>Getting new Things from Books</span>
              </p>
            </div>
          </div>
          <div class="input-fild-data">
            <label id="Label1" for="email" runat="server">E-Mail</label>
            <input id="email" runat="server" type="text" />
          </div>
          <div class="input-fild-data">
            <label ID="Lable4" runat="server">Password</label>
            <input id="Password1" runat="server" type="password" />
          </div>
          <div class="input-fild-data">
            <label ID="Lable7" runat="server">Password Confirmation</label>
            <input id="Password2" runat="server" type="password" />
          </div>
          <div>
            <input type="submit" value="Submit" class="btn btn-submit" />
            <input type="reset" value="Reset" class="btn btn-reset" />
          </div>
        </div>
      </form>
      <div id="resultDiv" runat="server"></div>
    </main>
  </body>
</html>
