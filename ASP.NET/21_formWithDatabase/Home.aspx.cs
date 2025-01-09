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
            string rollNumber = Request.Form["rollNumber"];
            string sem = Request.Form["sem"];
            string firstName = Request.Form["firstName"];
            string lastName = Request.Form["lastName"];
            string phoneNumber = Request.Form["phoneNumber"];
            string birthDateText = Request.Form["borthDate"];
            string gender = Request.Form["gender"];
            string email = Request.Form["email"];
            string password1 = Request.Form["password1"];
            string password2 = Request.Form["password2"];



            DateTime birthDate;

            // invalid use for showcaseing any input error ot use
            string invalid = "This filds are empty or invalid - ";
            string invalidNextUse = invalid;

            // Try to parse the birth date
            if (!DateTime.TryParse(birthDateText, out birthDate))
            {
                invalid += "date | ";
            }
            else
            {
                birthDateText = birthDate.ToString("yyyy-MM-dd");
            }

            // Retrieve hobbies (checkbox values)
            var hobbies = new System.Text.StringBuilder();
            if (Request.Form["Checkbox1"] != null) hobbies.Append("Knowing about new Computer technology, ");
            if (Request.Form["Checkbox2"] != null) hobbies.Append("Development, ");
            if (Request.Form["Checkbox3"] != null) hobbies.Append("Getting new Things from Books, ");

            // Remove trailing comma and space
            if (hobbies.Length > 0) hobbies.Length -= 2;

            // Validate email format
            bool isEmailValid = Regex.IsMatch(email, @"^[^@\s]+@[^@\s]+\.[^@\s]+$");
            bool isRollNumberValid = Regex.IsMatch(phoneNumber, @"^[1-9]\d*$");
            bool isPhoneNumberValid = Regex.IsMatch(phoneNumber, @"^\d{10}$");
            bool isPasswordValid = Regex.IsMatch(password1, @"^[A-Za-z\d@$!%*?&]{8,}$");
            isPasswordValid = password1 == password2 && isPasswordValid;

            invalid += isEmailValid ? "" : "email | ";
            invalid += isRollNumberValid ? "" : "roll number | ";
            invalid += isPhoneNumberValid ? "" : "phone number | ";
            invalid += isPasswordValid ? "" : "No match password";

            // Create a new div element with the submitted data using string concatenation
           string resultHtml;

           if (invalid != invalidNextUse)
           {
                resultHtml = "<script>alert('" + invalid + "')</script>";
            }
            else {
                resultHtml = "<div class='result-container'>" +
                    "<h2>Submitted Data:</h2>" +
                    "<p><strong>Roll Number:</strong> " + rollNumber +
                    "</p>" +
                    "<p><strong>Semeter:</strong> " + firstName +
                    "</p>" +
                    "<p><strong>First Name:</strong> " + firstName + 
                    "</p>" +
                    "<p><strong>Last Name:</strong> " + lastName + 
                    "</p>" +
                    "<p><strong>Phone Number:</strong> " + phoneNumber +
                    "</p>" +
                    "<p><strong>Birth Date:</strong> " + birthDate + 
                    "</p>" +
                    "<p><strong>Gender:</strong> " + gender + 
                    "</p>" +
                    "<p><strong>Hobbies:</strong> " + hobbies.ToString() + 
                    "</p>" +
                    "<p><strong>Email:</strong> " + email + 
                    "</p>" +
                    "</div>";
            }

            // Add the result HTML to the placeholder div
            resultDiv.InnerHtml = resultHtml;
        }
    }
}
