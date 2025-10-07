<?php
    $conn = mysqli_connect("localhost", "root", "root", "db1");

    if(!$conn) 
    {
        die("Connection failed: " . mysqli_connect_error());
    }

    $id = $_GET['id'];

    $delete = "DELETE FROM Students WHERE id = $id";

    if (mysqli_query($conn, $delete)) 
    {
        echo "Record deleted successfully.<br>";
    }
    else 
    {
        echo "Error:".mysqli_error($conn);
    }

    echo "<a href='Qu5_1_view.php'>Go to the main page</a>";

    $conn->close();
?>
