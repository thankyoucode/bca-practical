<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Code Community</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Code Community</h1>
    <table>
        <tr>
        <?php include "connect.php";
            foreach($data_fild as $fild=>$type) { echo "<th>".$fild."</th>"; }
        ?>
            <th>Remove</th>
            <th>Change</th>
        </tr>
    <?php 
        if(!$con) {
            die("connection to this database failed due to".mysqli_connect_error()."<br>");
        }
        $sql = "SELECT * FROM `codeuser` WHERE 1;";
        $response = mysqli_query($con,$sql);
        
        while($res = mysqli_fetch_array($response)){
            echo "<tr>";
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
        }
        $con->close();
    ?>
</table>
<button><a class="btn-danger btn" href="welcome.php">Back to Home</a></button>
</body>
</html>