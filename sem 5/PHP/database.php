<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
</head>
<body>
  <form action="" method="post">
    <input type="text" name="name" placeholder="Enter Name"><br><br>
    <input type="text" name="surname" placeholder="Enter Surname"><br><br>
    <input type="submit" value="Submit">
  </form>
  <?php
    $hostname="localhost";
    $username="root";
    $password="root";
    $database="db1";

    $conn = mysqli_connect($hostname, $username, $password, $database);

    if(!$conn) 
    {
        die("Connection failed: " . mysqli_connect_error());
    }
    echo "Connected successfully";
    if(isset($_POST['name'])){
      $name=$_POST['name'];
      $email=$_POST['surname'];
      $query="INSERT INTO STUDENT(name,surname) values($name,$surname)";

      if(mysqli_query($conn,$query)){
        echo "DATA Inserted !!";
      }
    }
  ?>
</body>
</html>