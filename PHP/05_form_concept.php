<!DOCTYPE html>
<html>
<head>
    <title>Form concept in PHP</title>
</head>
<body>
    <form name="form" method="post">
        <fieldset>
            <legend>Enter Your Details.</legend>
            <lable for="userName">Name</lable>
            <input type="text" name="name" id="userName" style="display: block; margin-bottom: 20px">
            <lable for="userContact">Contact No.</lable>
            <input type="text" name="cno" id="userContact" style="display: block; margin-bottom: 20px" >
            <input type="submit" name="submit" value="submit">
        </fieldset>
    </form>
    <?php
        if(isset($_POST['submit'])) {
            $name=$_POST['name'];
            $cno=$_POST['cno'];
            echo "<b>Your Name is: </b>".$name;
            echo "<br/>";
            echo "<b>Your Contact No: </b>".$cno;
        }
    ?>
</body>
</html>