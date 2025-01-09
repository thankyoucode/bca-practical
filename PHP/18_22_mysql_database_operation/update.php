<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Join Code Community</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Welcome to Code Community > Update</h1>
    <form method="post">
        <?php include "connect.php";
        try {
            if(!$con) {
                die("connection to this database failed due to".mysqli_connect_error()."<br>");
            }
            $id = $_GET['id'];
            $sql = "SELECT * FROM `codeuser` WHERE `id` = $id;";
            $response = mysqli_query($con,$sql);
            $res = mysqli_fetch_array($response);
            if($res){
                echo "<p>Hello <b>".$res['name']."</b>, update your information</p>";
                foreach($data_fild as $fild=>$type) {
                    echo fildInput($fild, $type, $res[$fild]);
                }
            }
            else {
                echo go_home("Record is not found");
            }
        } catch (\Throwable $th) {
            echo "data is not available!".$th;
        }
        ?>
        <input type="submit" class="btn-primary btn" name="update" value="Update">
        <button><a class="btn-danger btn" href="welcome.php">Back to Home</a></button>
    </form>
    <?php
    try {
        if(isset($_POST['update'])) {
            $sql_data = array();
            $sql_last_fild = "";
            foreach ($data_fild as $fild=>$type) {
                if ($fild == 'id' || $_POST[$fild]=='' || $_POST[$fild]==$res[$fild]) {
                    continue;
                } else {
                    $sql_data[$fild] = $_POST[$fild];
                    $sql_last_fild = $fild;
                }
            }
            // prepare sql query for updating data
            $sql = "UPDATE `codeuser` SET";
            foreach( $sql_data as $fild=>$data) {
                $sql = $sql." `$fild` = '".$data."'";
                if($fild != $sql_last_fild) { $sql = $sql.",";}
            };
            $sql = $sql." WHERE `codeuser`.`id` = ".$id.";";
            if($sql_last_fild == "") {
                echo "<p class='error'>Data is not <span class='error-impo'>Changed</span></p>";
                goto end;
            }
            mysqli_query($con,$sql);
            echo go_home('alert("Data is Updated");');
            echo '<a id="go_home" href="welcome.php"></a>
                <script>
                    alert("Data is Updated");
                    go_home.click();
                </script>';
            $con->close();
        }
    } catch (\Throwable $th) {
        echo "Error: $th";
    }
    end:
    
    function fildInput($fild, $type, $value) {
        if ($fild == "id") { return ' '; }
        return '<div class="flex-box">
            <lable for="'.$fild.'">'.$fild.'</lable>
            <input type="'.$type.'" name="'.$fild.'" value="'.$value.'">
        </div>';
    }

    function go_home($msg) {
        return '<a id="go_home" href="welcome.php"></a>
        <script>
            alert("'.$msg.'");
            go_home.click();
        </script>';
    }
?>
</body>
</html>