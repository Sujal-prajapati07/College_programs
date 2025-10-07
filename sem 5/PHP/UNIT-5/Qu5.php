<?php
    $conn = mysqli_connect("localhost", "root", "root", "db1");

    if (!$conn)
    {
        die("Connection failed");
    }
    else
    {
        echo "Database Connected";
    }
?>

<!DOCTYPE html>
<html>
<head>
</head>
<body>
    <h2>Sign Up</h2>
    <form method="POST">
        <label for="first_name">First Name:</label>
        <input type="text" id="first_name" name="first_name" required>

        <br><br>

        <label for="last_name">Last Name:</label>
        <input type="text" id="last_name" name="last_name" required>

        <br><br>

        <label for="email">Your Email:</label>
        <input type="email" id="email" name="email" required>

        <br><br>

        <label for="email">Re-enter Email:</label>
        <input type="email" id="confirm_email" name="confirm_email" required>

        <br><br>

        <label for="password">New Password:</label>
        <input type="password" id="password" name="password" required>

        <br><br>

        <label for="sex">I am:</label>
        <select id="sex" name="sex" required>
            <option value="">--Select--</option>
            <option value="Male">Male</option>
            <option value="Female">Female</option>
            <option value="Other">Other</option>
        </select>

        <br><br>

        <label>Birthday:</label>
        <select name="birth_month" required>
            <option value="">Month</option>
            <option value="January">January</option>
            <option value="February">February</option>
            <option value="March">March</option>
            <option value="April">April</option>
            <option value="May">May</option>
            <option value="June">June</option>
            <option value="July">July</option>
            <option value="August">August</option>
            <option value="September">September</option>
            <option value="October">October</option>
            <option value="November">November</option>
            <option value="December">December</option>
        </select>

        <select name="birth_day" required>
            <option value="">Day</option>
            <?php for ($i = 1; $i <= 31; $i++) echo "<option value='$i'>$i</option>"; ?>
        </select>

        <select name="birth_year" required>
            <option value="">Year</option>
            <?php for ($i = 1950; $i <= date("Y"); $i++) echo "<option value='$i'>$i</option>"; ?>
        </select>

        <br><br>
        <input type="submit" value="Sign Up">
    </form>

    <?php


if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $first_name     = $_POST['first_name'];
    $last_name      = $_POST['last_name'];
    $email          = $_POST['email'];
    $confirm_email  = $_POST['confirm_email'];
    $password       = $_POST['password'];
    $sex            = $_POST['sex'];
    $birth_month    = $_POST['birth_month'];
    $birth_day      = $_POST['birth_day'];
    $birth_year     = $_POST['birth_year'];

    if ($email !== $confirm_email) {
        echo "Error: Email addresses do not match.";
        exit;
    }

    $insert_que = "INSERT INTO Register (first_name, last_name, email, password, sex, birth_month, birth_day, birth_year)
                   VALUES ('$first_name', '$last_name', '$email', '$password', '$sex', '$birth_month', $birth_day, $birth_year)";

    $result = mysqli_query($conn, $insert_que);

    if ($result === TRUE) {
        echo "Record inserted successfully";
    } else {
        echo "Error: " . mysqli_error($conn);
    }

    $conn->close();
}
?>

  
</body>
</html>
