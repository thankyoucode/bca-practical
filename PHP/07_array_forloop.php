<?php
    $devop = array("webDev", "DeskDev", "AndroidDev");
    echo "Developer filds ~ ".$devop[0].", ".$devop[1]." and ".$devop[2]."<br>";
    $devop[0] = "website developer";
    $devop[1] = "Desktop developer";
    $devop[2] = "Android developer";
    for($i = 0; $i < 3; $i++) {
        echo $devop[$i]."<br>";
    }
    $langCre = array("c++"=>"Bjarne Stroustrup", "java"=>"James", "python"=>"Gauido Van Rossum");
    echo "<br>Programming Language Creators ~ ".$langCre['c++'].", ".$langCre['python']." and ".$langCre['java']."<br>";
    $langCre["java"] = "James Gosling";
    foreach($langCre as $creator=>$language) {
        echo $creator." > ".$language."<br>";
    }
?>