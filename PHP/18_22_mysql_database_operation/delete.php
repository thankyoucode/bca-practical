<?php include "connect.php";
try {
    if(!$con) {
        die("connection to this database failed due to".mysqli_connect_error()."<br>");
    }
    $id = $_GET['id'];
    $sql = "SELECT * FROM `codeuser` WHERE `id` = $id;";
    $response = mysqli_query($con,$sql);
    $res = mysqli_fetch_array($response);
    $sql = "DELETE FROM `codeuser` WHERE `codeuser`.`id` = ".$_GET['id']."";
    if($res){
        mysqli_query($con,$sql);
        echo go_home("Hi ".$res['name'].", deleted your record");
    }
    else {
        echo go_home("Record is not found");
    }
} catch (\Throwable $th) {
    echo go_home("data is not Found!");
}
function go_home($msg) {
    return '<a id="go_home" href="welcome.php"></a>
    <script>
        alert("'.$msg.'");
        go_home.click();
    </script>';
}
?>