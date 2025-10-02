<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title></title>
</head>
<body>
    <form method="post">
        Name: <input type="text" name="name"><br>
        Email: <input type="text" name="email"><br>
        Mobile: <input type="text" name="mobile"><br>
        Password: <input type="password" name="password"><br>
        <input type="submit" name="submit" value="Register">
    </form>

    <?php
        if(isset($_POST['submit']))
        {
            $name = $_POST['name'];
            $email = $_POST['email'];
            $mobile = $_POST['mobile'];
            $password = $_POST['password'];
            $errors = [];

            if(empty($name) || !preg_match("/^[a-zA-Z ]+$/", $name)) 
            {
                $errors[] = "Invalid Name";
            }

            if(empty($email) || !preg_match("/^[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,}$/i", $email)) 
            {
                $errors[] = "Invalid Email";
            }

            if(empty($mobile) || !preg_match("/^[0-9]{10}$/", $mobile)) 
            {
                $errors[] = "Invalid Mobile";
            }

            if(empty($password) || !preg_match("/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{8,}$/", $password)) 
            {
                $errors[] = "Weak Password";
            }

            if(empty($errors)) 
            {
                echo "<h2>";
                echo "Registration Successful<br>";
                echo "Name: $name<br>Email: $email<br>Mobile: $mobile<br>Password: $password";
                echo "</h2>";
            } 
            else 
            {
                foreach($errors as $e) {
                    echo $e."<br>";
                }
            }
        }
    ?>
</body>
</html>

