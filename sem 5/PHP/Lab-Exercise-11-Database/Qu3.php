<?php
    $conn = mysqli_connect("localhost", "root", "root", "db1");

    if (!$conn) 
    {
        die("Connection failed: " . mysqli_connect_error());
    } 
    else 
    {
        echo "<h1>Connection Successful</h1>";
    }
?>
<!DOCTYPE html>
<html>
<head>
    <title></title>
</head>
<body>
    <h2>Student Details</h2>
    <form method="POST">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required><br><br>

        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required><br><br>

        <label for="age">Age:</label>
        <input type="number" id="age" name="age" required><br><br>

        <input type="submit" value="Submit">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $name  = $_POST['name'];
        $email = $_POST['email'];
        $age   = $_POST['age'];

        $sql = "INSERT INTO Students (name, email, age) VALUES ('$name', '$email', $age)";
        $result = mysqli_query($conn, $sql);

        if ($result === TRUE) 
        {
            echo "<h3>Record inserted successfully!</h3>";
        } 
        else 
        {
            echo "Error: " . mysqli_error($conn);
        }

        mysqli_close($conn);
    }
    ?>
</body>
</html>
