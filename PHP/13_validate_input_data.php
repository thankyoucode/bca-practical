<!DOCTYPE html>
<html>
<head>
    <title>Request for SSL</title>
    <style>
        input {
            margin: 8px 4px 8px 8px;
            padding: 5px;
        }
    </style>
</head>
<body>
    <h2>Request for SSL Certificate</h2>
    <form method="POST">
        Holder Name: <input type="text" name="name" ><br>
        Email: <input type="email" name="email" ><br>
        Website: <input type="text" name="website" placeholder="url"><br>
        about website: <textarea type="text" name="comment"></textarea><br>
        Gender: <input type="radio" name="gender" value="male" checked>Male
                <input type="radio" name="gender" value="female">Female
                <input type="radio" name="gender" value="other">Other<br>
        <input type="submit" name="submit" value="Submit">
    </form>
<?php    
    $field = array("name"=>"", "email"=>"", "website"=>"", "comment"=>"", "gender"=>"");
    if($_SERVER["REQUEST_METHOD"] == "POST") {
        foreach ($field as $key=>$data) {
            $field[$key] = validate($_POST[$key]);
        }
    }
    if (isset($_POST['submit'])) {
        foreach ($field as $key=>$data) {
            echo $key.": ".$data."<br>";
        }
    }
    function validate($data) {
        $data = trim($data);
        $data = stripslashes($data);
        $data = htmlspecialchars($data);
        return $data;
    }
?>
</body>
</html>