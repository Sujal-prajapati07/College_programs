<?php
session_start();

$USERNAME = "root";
$PASSWORD = "root";


if(isset($_POST['login'])) 
{
    $username = $_POST['username'];
    $password = $_POST['password'];

    if($username === $USERNAME && $password === $PASSWORD) 
    {
        $_SESSION['username'] = $username;

        if(isset($_POST['remember'])) 
        {
            setcookie("username", $username, time() + 7*24*60*60); // 7 days
        } 
        else 
        {
            setcookie("username", "", time() - 3600); // delete cookie
        }

        $message = "Login successful...! Welcome, $username.";
    } 
    else 
    {
        $message = "Invalid username or password!";
    }
}

//Set $cookie_username to the cookie’s value if it exists; otherwise, set it to empty
$cookie_username=isset($_COOKIE['username']) ? $_COOKIE['username'] : "";?>

<!DOCTYPE html>
<html>
<head>
    <title></title>
</head>
<body>
    <form method="post">
        <!-- htmlspecialchars() makes text safe for HTML display by converting special characters -->
        Username: 
        <input type="text" name="username" 
        value="<?php echo htmlspecialchars($cookie_username); ?>" required>
        <br><br>
        Password: <input type="password" name="password" required><br><br>
        <label>
            <input type="checkbox" name="remember" <?php if($cookie_username) echo "checked"; ?>> Remember Me
        </label>
        <br><br>
        <input type="submit" name="login" value="Login">
    </form>

    <?php if(isset($message)) echo "<p>$message</p>"; ?>
</body>
</html>
