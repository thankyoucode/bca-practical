<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
    <title>Manage Items</title>
    <style type="text/css">
        body 
        {
            min-height: 100vh;
            margin: 0;
            font-family: Arial, sans-serif;
            background-color: #e9ecef;
        }
        main {
            display: flex;
            justify-content: center;
            align-items: center;
        }

        #form1 {
            background: #fff;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 4px 8px rgba(0,0,0,0.1);
            width: 400px;
        }

        h1 {
            margin-bottom: 20px;
            color: #333;
            font-size: 1.5em;
            text-align: center;
        }

        .input-group {
            margin-bottom: 20px;
            display: flex;
            flex-direction: column;
            align-items: center;
        }

        .input-group input[type="text"] {
            padding: 10px;
            font-size: 16px;
            width: 100%;
            max-width: 250px;
            border: 1px solid #ced4da;
            border-radius: 4px;
            box-sizing: border-box;
            margin-bottom: 10px;
        }

        .input-group button {
            padding: 10px 20px;
            font-size: 16px;
            cursor: pointer;
            background-color: #007bff;
            color: #fff;
            border: none;
            border-radius: 4px;
            margin: 5px;
            transition: background-color 0.3s ease;
        }

        .input-group button:hover {
            background-color: #0056b3;
        }

        .result-box {
            display: flex;
            justify-content: space-between;
        }

        .list-item {
            width: 48%;
        }

        .list-item select, .list-item ul {
            width: 100%;
            padding: 10px;
            border: 1px solid #ced4da;
            border-radius: 4px;
            box-sizing: border-box;
            background-color: #fff;
        }
        .btn 
        {
            border: none;
            padding: 8px;
            border-radius: 4px;
            cursor:pointer;
        } 
        .btn-blue 
        {
            background: #89a6ff;
        }
        .btn-red
        {
            background: #ff89a6;
        }
        .btn-green 
        {
            background: #89ffa6;
        }
    </style>
</head>
<body>
 
 
   <h1>How Simple DOM Manipulation Works with C# Backend</h1>
    <main>
    <form id="form1" runat="server">
        <div class="input-group">
            <asp:TextBox ID="TextBox1" runat="server" CssClass="form-control" />
            <div>
            <asp:Button ID="ButtonAdd" runat="server" Text="Add Item" OnClick="ButtonAdd_Click" CssClass="btn btn-primary btn-blue" />
            <asp:Button ID="ButtonRemove" runat="server" Text="Remove Item" OnClick="ButtonRemove_Click" CssClass="btn btn-primary btn-red" />
            <asp:Button ID="ButtonRemoveAll" runat="server" Text="Remove All Items" OnClick="ButtonRemoveAll_Click" CssClass="btn btn-primary btn-green" />
            </div>
        </div>
        <div class="result-box">
            <div class="list-item">
                <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="true" CssClass="form-control">
                </asp:DropDownList>
            </div>
            <div class="list-item">
                <asp:ListBox ID="ListBox1" runat="server" CssClass="form-control">
                </asp:ListBox>
            </div>
        </div>
    </form>
    </main>
</body>
</html>
