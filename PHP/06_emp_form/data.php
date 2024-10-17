<fieldset>
<?php include 'write.php';
session_start();
$emp_data = array("legend"=>"Employee Details",
    "field1"=>"ID No.", "field2"=>"Name","field3"=>"Address",
    "val1"=>$_SESSION["eno"], "val2"=>$_SESSION["name"], "val3"=>$_SESSION["addr"]);
addDataList($emp_data);
$insur_data = array("legend"=>"Insurance details",
    "field1"=>"Plan No.", "field2"=>"Plan Name","field3"=>"Premium",
    "val1"=>$_POST['pno'], "val2"=>$_POST['pname'], "val3"=>$_POST['pre']);
echo '</fieldset> <fieldset>';
addDataList($insur_data);
?>
</fieldset>