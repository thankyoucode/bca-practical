<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>BCA College Deesa</title>
    <style>
        body { font-family: 'Trebuchet MS'; }
        .flex-box {
            display: flex;
            flex-direction: row;
            align-items: center;
        }
        .container { justify-content: space-around; }
        .college-name {
            background: rgb(165, 165, 165);
            border-radius: 8px;
        }
        .college-name * { margin: 10px; }
    </style>
</head>
<body>
    <h1>College</h1> <hr>
    <?php 
        $college = array('name' => 'BCA COLLEGE, DEESA', 
            'college_link'=>'https://www.spefdeesacolleges.org', 
            'full_name' => 'SMT CHANDANBEN SHANTILAL <br> SWARUPCHAD SHAH', 
            'phoneno' => '02744 - 22300');
        echo '<div class="container flex-box">
            <div>
                <h2 class="heading"><a href="'.$college['college_link'].'">'.$college['name'].'</a></h2>
                <span>⇑ click to go official Website ⇑</span>
            </div>
            <div class="college-name flex-box">
                <p style="font-size: 2rem;">🏫</p>
                <h3>'.$college['full_name'].'</h3>
            </div>
        </div>
        <p>Phone No.: <b>'.$college['phoneno'].'</b></p>';

    ?>
</body>
</html>