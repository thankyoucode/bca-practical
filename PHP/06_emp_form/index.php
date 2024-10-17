<html>
<head> <title>Employee Form</title> </head>
<body>
    <form method="POST" action="insurance.php">
        <fieldset>
            <?php include 'write.php';
                $data = array('legend'=>'Enter Employee Details',
                'field1'=>'ID No.', 'field2'=>'Name','field3'=>'Address',
                'val1'=>inputfield('eno'), 'val2'=>inputfield('name'), 'val3'=>inputfield('addr'));
                addDataList($data);
            ?>
            <input type=submit value=submit>
        </fieldset>
    </form>
</body>
</html>