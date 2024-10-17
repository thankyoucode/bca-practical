<!DOCTYPE html>
<html>
<head>
    <title>Recursive traversals of directory</title>
    <style>
        input { padding: 5px; width: 100px; }
    </style>
</head>
<body>
    <form method="GET">
        Folder Path: <input type=text name=dir_path><br>
        <input type=submit name=submit>
    </form>
<?php
    if (isset($_GET['submit']) && isset($_GET['dir_path']) ) {
        $dir = $_GET['dir_path'];
        if(is_dir($dir)) {
            showSubdir($dir);
        } else {echo "Path not found";}
    }
    function showSubDir($dir) {
        $dir = $dir.'\\';
        $folder = opendir($dir);
        while(($sub_folder = readdir($folder)) != "") {
            if(is_dir($dir.$sub_folder) && ($sub_folder != "." && $sub_folder != "..")) {
                showSubdir($dir.$sub_folder);
            } else {
                echo $dir.$sub_folder."<br>";
            }
        }
    }
?>
</body>
</html>