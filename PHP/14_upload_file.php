<!DOCTYPE html>
<html>
<head>
    <title>Cloud Store</title>
</head>
<body>
    <form method="POST" enctype="multipart/form-data">
        Upload File: <input type="file" name="file">
        <input type="submit" name="submit" value="Upload">
    </form>
    <?php
        if(isset($_POST['submit'])) {
            $file_name = $_FILES['file']['name'];
            $file_loc = $_FILES['file']['tmp_name'];
            $cloud_store = "upload/".$file_name;
            move_uploaded_file($file_loc, $cloud_store);
            echo $file_name." uploaded on cloud";
        }
    ?>
</body>
</html>