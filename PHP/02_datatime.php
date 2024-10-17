<!-- Write a PHP Program to display the today's date and current time. -->
<!-- 
    echo        and     print   are use for print data on web
    strftime()  and     date()  are use for showing date and time
 -->
<?php
    echo "<b>Full Date and Time : </b>";
    print strftime('%c');
    echo "<br/><b>Full Date : </b>";
    print strftime('%d/%m/%Y');
    echo "<br/><b>Date with Full Name : </b>";
    print strftime('%A,%d%B-%Y');
    echo "<br/>";
    echo "<b> Current Day date and time is : </b>" .date("D M d, Y G:i A");
?>