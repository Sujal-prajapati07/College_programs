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

    <form method="post">
        Enter Name: <input type="text" name="name">
        Email : <input type="text" name="email">
        <input type="submit" name="check" value="Check">
    </form>

    <?php
    if (isset($_POST['check'])) 
    {
        $name = $_POST['name'];
        $sql = "SELECT * FROM Customer WHERE name='$name'";

        $result = mysqli_query($conn, $sql);

        if (mysqli_num_rows($result) > 0) 
        {
            echo "<br>Name '$name' is already registered.";
        } 
        else 
        {
            echo "<br>Name '$name' is not registered.";
        }
    }
    $conn->close();
?>
