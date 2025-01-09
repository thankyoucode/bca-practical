<!-- Write a PHP Program to display the Fibonacci Series. -->
<!-- 
    sudo code:
        <int>  a = 0, b = 1, helper, count = 0, n = 20

        
        while(count < n):
            print a

            # simpe mathod A
            helper = a + b
            a = b
            b = helper

            # second method B with math eqution
            # only use a nad b, whout using helper
            b += a
            a = b - a

            count += 1


 -->
<?php
    $a = 0; $b = 1; $helper; $count = 0; $n = 20;
    
    while($count < $n) {
        echo $a . "<br>";

        // simple method A
        $helper = $a + $b;
        $a = $b;
        $b = $helper;

        // method B
        // $b += $a;
        // $a = $b - $a;

        $count++;
    }
?>