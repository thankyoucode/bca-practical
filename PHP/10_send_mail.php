<?php
$to_email = "himom@gmail.com";
$subject = "thanks";
$body = "Thank You for all of this";
$headers = "From: hime@gmail.com";
if (mail($to_email, $subject, $body, $headers)) {
    echo "Email successfully sent to $to_email...";
} else {
    echo "Email sending failed...";
}
?>