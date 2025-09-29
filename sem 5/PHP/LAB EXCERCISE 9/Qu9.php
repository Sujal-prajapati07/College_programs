<!DOCTYPE html>
<html>
<head><title>Password Validation</title></head>
<body>
<form method="post">
    Enter Password: <input type="password" name="password" required>
    <br><br>
    <input type="submit" name="Check">
    <br><br>
</form>

<?php
    if($_SERVER["REQUEST_METHOD"]=="POST") 
    {
        $password = $_POST['password'];

        if (preg_match("/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{8,}$/", $password)) 
        {
            echo "<h1>Strong Password</h1>";
        } 
        else 
        {
            echo "</h1>Weak Password</h1>";
        }
    }
?>
</body>
</html>
