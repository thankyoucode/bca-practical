<!DOCTYPE html>
<html>
<head>
    <title>Create Copy Delete File</title>
    <style>
        input {
            margin: 4px;
            padding: 2px;
        }
    </style>
</head>
<body>
    <h2>Create | Copy | Delete - file</h2>
    <form method="GET">
        * File: <input type=text name="file"><br>
        Copy File: <input type=text name=copy_file><br>
        <textarea name="content" cols=30 rows=10></textarea><br>
        <input type=submit name=create value=Create>
        <input type=submit name=copy value=Copy>
        <input type=submit name=delete value=Delete>
    </form>
    <?php
        $filename = $_REQUEST['file'];
        if(isset($_REQUEST['create'])) {
            if(handleFileExist($filename)) {
                $content = $_REQUEST['content'];
                file_put_contents($filename, $content);
                echo $filename." is created";
            }
        } else if(isset($_REQUEST['copy'])) {
            $copyfilename = $_REQUEST['copy_file'];
            if(handleFileNotExist($filename) && handleFileExist($copyfilename)) {
                $content =  file_get_contents($filename);
                file_put_contents($copyfilename, $content);
                echo $filename." copy to ".$copyfilename;
            }
        } else if(isset($_REQUEST['delete'])) {
            if(handleFileNotExist($filename)) {
                unlink($filename);
                echo $filename." is deleted";
            }
        }
        
        function handleFileExist($filename) {
            if(file_exists($filename)) {
                echo $filename." file exist";
                return 0;
            }
            return 1;
        }
        function handleFileNotExist($filename) {
            if(!file_exists($filename)) {
                echo $filename." file not exist";
                return 0;
            }
            return 1;
        }
    ?>
</body>
</html>
<!-- /*  fopen("file.txt", "r")
            file_exists(string filename)
            if_file(string filename)
            file_get_contencts()
            file_put_contencts()
            unlink($filename)
            fclose($file)                     */ -->
