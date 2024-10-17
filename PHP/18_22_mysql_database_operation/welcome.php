<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Join Code Community</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h2>Welcome to Code Community</h2>
    <div class="box">
    <button><a class="btn-danger btn" href="display.php">All Coders</a></button>
    <button><a class="btn-primary btn" href="search.php">Search</a></button>
    </div>
    <div>
    <button><a class="btn-primary btn" href="update_input.html">Go Update</a></button>
    <button><a class="btn-primary btn" href="delete_input.html">Go Delete</a></button>
    </div>
    <p>Fill details and join Community</p>
    <form method="post">
        <?php include "connect.php";
            foreach($data_fild as $fild=>$type) { echo fildInput($fild, $type); }
        ?>
        <button class="btn-primary btn" name="submit">Join</button> <br>
        
    </form>
    <?php
    if(isset($_POST['submit'])) {
        try {
            if(!$con) {
                die("connection to this database failed due to".mysqli_connect_error()."<br>");
            }
            $new_data = array();
            foreach ($data_fild as $fild=>$type) {
                $new_data[$fild] = $_POST[$fild];
            }
            $sql = "INSERT INTO `codeuser` (`id`, `name`, `phoneno`, `city`, `email`, `password`) 
                VALUES (
                    '".$new_data["id"]."', '".$new_data["name"]."', 
                    '".$new_data["phoneno"]."', '".$new_data["city"]."', 
                    '".$new_data["email"]."',  '".$new_data["password"]."'
                );";
            mysqli_query($con,$sql);
            echo "<h3>Thanks ".$new_data["name"]." to Join Code Community<h3>";
            $con->close();
        } catch (\Throwable $th) {
            // echo "data is not inserted correctly ".$th;
            echo "<p class='error'>This <b>id</b> allready <span class='error-impo'>Exist</span></p>";
        }
    }
    function fildInput($fild, $type) {
        return '<div class="flex-box">
            <lable for="'.$fild.'">'.$fild.'</lable>
            <input type="'.$type.'" name="'.$fild.'">
        </div>';
    }
?>
</body>
</html>