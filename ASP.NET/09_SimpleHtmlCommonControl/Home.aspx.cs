using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Text.RegularExpressions;


public partial class Home : Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        // Handle form submission here if needed
    }

    protected void Page_LoadComplete(object sender, EventArgs e)
    {
        if (IsPostBack)
        {
            // Retrieve form data using Request.Form
            string firstName = Request.Form["firstName"];
            string lastName = Request.Form["lastName"];
            string birthDateText = Request.Form["borthDate"];
            DateTime birthDate;

            // Try to parse the birth date
            if (!DateTime.TryParse(birthDateText, out birthDate))
            {
                birthDateText = "Invalid date format";
            }
            else
            {
                birthDateText = birthDate.ToString("yyyy-MM-dd");
            }

            string gender = Request.Form["gender"];

            // Retrieve hobbies (checkbox values)
            var hobbies = new System.Text.StringBuilder();
            if (Request.Form["Checkbox1"] != null) hobbies.Append("Knowing about new Computer technology, ");
            if (Request.Form["Checkbox2"] != null) hobbies.Append("Development, ");
            if (Request.Form["Checkbox3"] != null) hobbies.Append("Getting new Things from Books, ");

            // Remove trailing comma and space
            if (hobbies.Length > 0) hobbies.Length -= 2;

            string email = Request.Form["email"];

            // Validate email format
            bool isEmailValid = Regex.IsMatch(email, @"^[^@\s]+@[^@\s]+\.[^@\s]+$");
            string emailText = isEmailValid ? email : "Invalid email format";

            // Create a new div element with the submitted data using string concatenation
           string resultHtml = "<div class='result-container'>" +
                    "<h2>Submitted Data:</h2>" +
                    "<p><strong>First Name:</strong> " + firstName + 
                    "</p>" +
                    "<p><strong>Last Name:</strong> " + lastName + 
                    "</p>" +
                    "<p><strong>Birth Date:</strong> " + birthDateText + 
                    "</p>" +
                    "<p><strong>Gender:</strong> " + gender + 
                    "</p>" +
                    "<p><strong>Hobbies:</strong> " + hobbies.ToString() + 
                    "</p>" +
                    "<p><strong>Email:</strong> " + emailText + 
                    "</p>" +
                    "</div>";


            // Add the result HTML to the placeholder div
            resultDiv.InnerHtml = resultHtml;
        }
    }
}
