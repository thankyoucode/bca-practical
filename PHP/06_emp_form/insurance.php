<?php
session_start();
$_SESSION['eno']=$_POST['eno'];
$_SESSION['name']=$_POST['name'];
$_SESSION['addr']=$_POST['addr'];
echo"Hello ".$_SESSION['name']." Welcome To Insure World<br>";
?>
<form method="POST" action="data.php">
    <fieldset>
        <?php include 'write.php';
            $data = array('legend'=>'Enter Insurance details',
            'field1'=>'Plan No.', 'field2'=>'Plan Name','field3'=>'Premium',
            'val1'=>inputfield('pno'), 'val2'=>inputfield('pname'), 'val3'=>inputfield('pre'));
            addDataList($data);
        ?>
        <input type=submit value=Display>
    </fieldset>
</form>