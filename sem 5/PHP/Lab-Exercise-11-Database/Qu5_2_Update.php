<?php
    $conn = mysqli_connect("localhost", "root", "root", "db1");

    if (!$conn) 
    {
        die("Connection failed: " . mysqli_connect_error());
    }

    $id = $_GET['id'];

    if ($_SERVER["REQUEST_METHOD"] == "POST") 
    {
        $new_age = $_POST['age'];
        $update = "UPDATE Students SET age = $new_age WHERE id = $id";

        if (mysqli_query($conn, $update)) 
        {
            echo "Age updated successfully.<br>";
            echo "<a href='Qu5_1_view.php'>Go to the main page</a>";
        } 
        else 
        {
            echo "Error: " . mysqli_error($conn);
        }
    } 
    else 
    {
        $que="SELECT * FROM Students WHERE id = $id";
        $result = mysqli_query($conn,$que);
        $student = mysqli_fetch_assoc($result);

        echo "<form method='POST'>
                <label>New Age:</label>
                <input type='number' name='age' value='{$student['age']}' required>
                <input type='submit' value='Update'>
              </form>";
    }

    $conn->close();
?>
