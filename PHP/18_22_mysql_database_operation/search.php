<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Code Community Member</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Search Community Member</h1>
    
    <form action="?" method="post">
    <div class="flex-box">
        <lable for="id">id</lable>
        <input type="number" name="id">
    </div>
    <br>
    <input type="submit" name="search" value="Search" class="btn-primary btn">
    <button><a class="btn-danger btn" href="welcome.php">Back to Home</a></button>
    </form>
    <?php include "connect.php";
        if(isset($_POST['search'])) {
            try {
                $id = $_POST['id'];
                if(!$con) {
                    die("<b>Connection failed</b> to this database due to: ".mysqli_connect_error()."<br>");
                }
                $sql = "SELECT * FROM `codeuser` WHERE `id`=".$id.";";
                $response = mysqli_query($con,$sql);
                $res = mysqli_fetch_array($response);
                if($res) {
                echo '<table>
                    <tr>'
                        .table_head($data_fild).'
                        <th>Remove</th>
                        <th>Change</th>
                    </tr>
                    <tr>';
                    foreach($data_fild as $fild=>$type) {
                        echo "<td>".$res[$fild]."</td>";
                    }
                    echo '<td> 
                        <a href="delete.php?id='.$res["id"].'"><button class="btn-danger btn">Delete</button></a>
                   </td>
                    <td>
                        <a href="update.php?id='.$res["id"].'"> <button class="btn-primary btn">Update</button> </a>
                    </td>
                    </tr>';
                    echo '</table>';
                } else {
                    echo "<p class='error'><b>Not found</b> any record where id is: <span class='error-impo'>".$id."</span></p>";
                }
                $con->close();
            }catch (\Throwable $th) {
                echo "<p class='error'>Please <b>Enter Id</b>: and click <span class='error-impo'>Search</span></p>";
                // echo "Error -- ".$th;
            }
        }
        function table_head($fild_list) {
            $head_list = "";
            foreach($fild_list as $fild=>$type) { 
                $head_list = $head_list."<th>".$fild."</th>"; 
            }
            return $head_list;
        }
    ?>
</body>
</html>