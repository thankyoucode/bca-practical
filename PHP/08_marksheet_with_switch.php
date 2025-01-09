<!DOCTYPE html>
<html>
<head>
    <title>Marksheet</title>
</head>
<body>
    <h2>Find Marksheet details</h2>
    <form method="GET">
        Total Marks(one subject): <input type=number name="total" placeholder="Ex. 100"></br>
        Subject 1: <input type=number name=sub1></br>
        Subject 2: <input type=number name=sub2></br>
        Subject 3: <input type=number name=sub3></br>
        Subject 4: <input type=number name=sub4></br>
        Subject 5: <input type=number name=sub5></br>
        Subject 6: <input type=number name=sub6></br>
        <input type=submit name=submit value='Create Marksheet'><br><br>
    </form>
    <?php 
        if(isset($_GET['submit'])) {
            try {
            $total = intval($_GET['total']);
            $sub = array();
            $totalMark = 0;
            for($i = 0; $i < 6; $i++) {
                $sub[$i] = intval($_GET['sub'.$i+1]);
                $totalMark += $sub[$i];
                echo "Subject ".($i+1).": ".$sub[$i]."<br>";
            }
            $per = ($totalMark * 100) / ($total * 6);
            $passMin = round(($total * 33) / 100);
            $pass = TRUE;
            $min = min($sub); $max = max($sub);
            echo "Total: ".$totalMark."<br>Grade: ";
            switch($per) {
                case $max > $total: echo "-- (incureect marks)";
                    $pass = FALSE; break;
                case $min < $passMin: echo "Fail";
                    $pass = FALSE; break;
                case $per<35:   echo 'F'; break;
                case $per<=50:  echo 'D'; break;
                case $per<=60:  echo 'C'; break;
                case $per<=70:  echo 'B'; break;
                case $per<=100: echo 'A'; break;
                default: echo "-- (Marks are not currect)";
                    $pass = FALSE;
            }
            if($pass) { echo "<br>Percentage: ".substr(strval($per), 0, 5); }
            } catch (\Throwable $th) {
                echo "Fill all input fild and try again";
            }
            
        }
    ?>
</body>
</html>