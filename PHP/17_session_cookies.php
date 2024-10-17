<?php
$_SESSION["s_no"] = "89";
$_SESSION["name"] = "game-start";
setcookie("test_cookie", "test", time() + 3600, '/');
?>
<!DOCTYPE html>
<html>
<body>
<?php
// Echo session variables that were set on previous page
echo "Session id: " . $_SESSION["s_no"] . ".<br>";
echo "Session name: " . $_SESSION["name"] . ".<br>";
if(count($_COOKIE) > 0) {
    echo "Cookies are enabled.";
    } else {
    echo "Cookies are disabled.";
    }
?>
</body>
</html>