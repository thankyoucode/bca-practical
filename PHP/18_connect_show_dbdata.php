<?php
if (isset($_POST['send_data'])) {
    $server = "localhost";
    $username = "root";
    $password = "";
    $dbname = "php406";

    // Create connection
    $con = new mysqli($server, $username, $password, $dbname);

    // $con = mysqli_connect($server, $username, $password);
    $id = $_POST['id'];
    $name = $_POST['name'];
    $phone = $_POST['phone'];
    $city = $_POST['city'];
    $email = $_POST['email'];
    $password = $_POST['password'];

    if(!$con) {
        die("connection to this database failed due to".mysqli_connect_error()."<br>");
    }
    echo "Success connection to the db"."<br>";

    // Escape variables for security to prevent SQL injection
    $id = $con->real_escape_string($id);
    $name = $con->real_escape_string($name);
    $phone = $con->real_escape_string($phone);
    $email = $con->real_escape_string($email);
    $password = $con->real_escape_string($password);

    // $sql = "INSERT INTO `codeuser` (`id`, `name`, `phoneno`, `city`, `email`, `password`) VALUES ('4', 'rahul', '9283429239', 'doale', 'romcoll@gmail.com', 'ha48UI023k')";

    $sql = "SELECT * FROM `codeuser` WHERE 1;";


    $query = mysqli_query($con,$sql);
    echo "<table>";
    while($res = mysqli_fetch_array($query)){
    ?>
    <tr>
    <td><?php echo $res['id']; ?></td>
    <td><?php echo $res['name']; ?></td>
    <td><?php echo $res['phoneno']; ?></td>
    <td><?php echo $res['city']; ?></td>
    <td><?php echo $res['email']; ?></td>
    <td><?php echo $res['password']; ?></td>
    <td><button class="btn-danger btn"><a href="delete.php?id=<?php echo $res['id'];?>"
    class="text-white"> Delete</a></button></td>
    <td><button class="btn-primary btn"><a href="update.php?id=<?php echo $res['id'];?>"
    class="text-white">Update</a></button></td>
    </tr>
<?php
    echo "</table>";
    }
    $con->close();
    
    echo $sql;
    $returnData = "";
    if ($returnData = $con->query($sql) == true) {
        echo "Successfully inserted";
        echo $returnData;
    }
    else {
        echo "query is not exiqute check the error <br>";
        echo "ERROR: $sql <br> $con->error";
    }
}    
?>


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>login form</title>
    <link rel="stylesheet" href="03_style.css">
</head>

<body>
    <div class="container">
        <div class="main">
            <div class="contact-form">
                <h1 class="">welcome to Code Community</h1>
                <form method="POST">
                    <div class="input-fild flex-column">
                        <label for="id" class="form-label">Id</label>
                        <input type="text" class="form-control" id="id" name="id">
                    </div>
                    <div class="input-fild flex-column">
                        <label for="name" class="form-label">Name</label>
                        <input type="text" class="form-control" id="name" name="name">
                    </div>
                    <div class="input-fild flex-column">
                        <label for="phone" class="form-label">Phone</label>
                        <input type="phone" class="form-control" id="phone" name="phone">
                    </div>
                    <div class="input-fild flex-column">
                        <label for="City" class="form-label">City</label>
                        <input type="text" class="form-control" id="city" name="city">
                    </div>
                    <div class="input-fild flex-column">
                        <label for="email" class="form-label">Email address</label>
                        <input type="email" name="email" class="form-control" id="clientEmail"
                        aria-describedby="emailHelp">
                        <div id="email" name="email" class="term">We'll never share your email & phone with anyone else.
                        </div>
                    </div>
                    <div class="input-fild flex-column">
                        <label for="password" class="form-label">Password</label>
                        <input type="password" class="form-control" id="password" name="password">
                    </div>
                    <button type="submit" class="btn btn-sm btn-primary" id="send_data" name="send_data">Submit</button>
                </form>
            </div>
        </div>
</body>

</html>