<!DOCTYPE html>
<html>
<head>
    <title>Matrix Muliplication (3 x 3)</title>
    <style>
        .flex-center {
            display: flex;
            flex-direction: column;
            align-items: center;
        }
        .result {
            margin: 20px;
        }
        .result tr td {
            padding: 5px 30px;
            border: 2px solid #555;
            border-radius: 5px;
        }
        input {
            padding: 5px;
            width: 100px;
        }
    </style>
</head>
<body class="flex-center">
    <h1>Muliplication of two Matrix</h1>
    <form method="GET" class="flex-center">
        <p>Matrix 1</p>
        <?php $n = 3; writeMatrixTable($n, 0); ?>
        <p>Matrix 2</p>
        <?php writeMatrixTable($n, 10); ?>
        <input type="submit" value="Calc" name="submit">
    </form>
<?php
    if(isset($_GET['submit'])) {
        /*  You can use this as defult values without taking input from web
        if you wont to use this defult value command out $m1, $m2 
        ----------------------------------------------------------- */
        // $m1 = array(array(1, 2, 3), array(4, 5, 6), array(7, 8, 9));
        // $m2 = array(array(9, 8, 7), array(6, 5, 4), array(3, 2, 1));
                                /* OR */
        // $m1 = array(array(1, 1, 1), array(1, 1, 1), array(1, 1, 1));
        // $m2 = array(array(1, 1, 1), array(1, 1, 1), array(1, 1, 1));
        $m1 = getM($n, 0);
        $m2 = getM($n, 10);
        $r = multiplyM($n, $m1, $m2);
        setM($n, $r);
    }
    function writeMatrixTable($n, $s) {
        echo "<table>";
        for ($i=0; $i < $n; $i++) { 
            echo "<tr>";
            for ($j=0; $j < $n; $j++) { 
                echo '<td><input type="number" name="'.++$s.'"></td>';
            }
            echo "</tr>";
        }
        echo "</table>";
    }
    function getM($n, $n_count) {
        $m = array(array(), array(), array());
        $count = $n_count + 1;

        for ($i=0; $i < $n; $i++) { 
            for ($j=0; $j < $n; $j++, $count++) { 
                $m[$i][$j] = $_GET[$count];
            }
        }
        return $m;
    }
    function multiplyM($n, $m1, $m2) {
        $r = array(array(), array(), array());
        for ($i=0; $i < $n; $i++) { 
            for ($j=0; $j < $n; $j++) {
                $t = 0;
                for ($k=0; $k < $n; $k++) { 
                    $t += $m1[$i][$k]*$m2[$k][$j];  // multiplication of the matrix one-by-one
                }
                $r[$i][$j] = $t;
            }
        }
        return $r;
    }
    function setM($n, $m) {
        echo "<table class='result'>";
        for ($i=0; $i < $n; $i++) { 
            echo "<tr>";
            for ($j=0; $j < $n; $j++) { 
                echo "<td>".$m[$i][$j]."</td>";
            }
            echo "</tr>";
        }
        echo "</table>";
    }
?>
</body>
</html>