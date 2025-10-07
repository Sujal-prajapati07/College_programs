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
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
</head>
<body>
  <form method="post">
    Title: <input type="text" name="title" required>
    <br><br>
    Author: <input type="text" name="author" required>
    <br><br>
    Genre: <input type="text" name="genre" required>
    <br><br>
    Place in Library: <input type="text" name="place" required>
    <br><br>
    Condition: <input type="text" name="condition" required>
    <br><br>
    <input type="submit" value="Ok">
  </form>

  <?php
    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $title = $_POST['title'];
        $author = $_POST['author'];
        $genre = $_POST['genre'];
        $place = $_POST['place'];
        $condition = $_POST['condition'];

        $insert_que = "INSERT INTO Library (title, author, genre, place_in_library, book_condition) VALUES ('$title', '$author', '$genre', '$place', '$condition')";

        $result = mysqli_query($conn, $insert_que);

        if ($result) 
        {
            echo "Record inserted successfully.";
        } 
        else 
        {
            echo "Error: " . mysqli_error($conn);
        }
    }

    $conn->close();
  ?>
</body>
</html>