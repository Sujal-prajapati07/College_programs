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
    <title>Fruit Survey</title>
</head>
<body>
    <h2>The World of Fruit</h2>
    <form method="POST">
        <label for="name">Name:</label><br>
        <input type="text" id="name" name="name" required><br><br>

        <label for="address">Address:</label><br>
        <input type="text" id="address" name="address" required><br><br>

        <label for="email">Email:</label><br>
        <input type="email" id="email" name="email" required><br><br>

        <label>How many pieces of fruit do you eat per day?</label><br>
        <input type="radio" name="fruit_per_day" value="0" required> 0<br>
        <input type="radio" name="fruit_per_day" value="1"> 1<br>
        <input type="radio" name="fruit_per_day" value="2"> 2<br>
        <input type="radio" name="fruit_per_day" value="3"> More than 2<br><br>

        <label for="favourite_fruit">My favourite fruit:</label><br>
        <select name="favourite_fruit" id="favourite_fruit" required>
            <option value="Apple">Apple</option>
            <option value="Banana">Banana</option>
            <option value="Plum">Plum</option>
            <option value="Pomegranate">Pomegranate</option>
        </select><br><br>

        <label for="brochure">Would you like a brochure?</label><br><br>
        <input type="checkbox" id="brochure" name="brochure">

        <input type="submit" value="Submit">
    </form>

    <?php
    	if($_SERVER["REQUEST_METHOD"]=="POST")
    	{
    		$name=$_POST['name'];
    		$address = $_POST['address'];
			$email = $_POST['email'];
			$fruit_per_day = $_POST['fruit_per_day'];
			$favourite_fruit = $_POST['favourite_fruit'];
			$brochure = isset($_POST['brochure']) ? 1 : 0;

			$insert_que = "INSERT INTO Fruit (name, address, email, fruit_per_day, favourite_fruit, wants_brochure) 
               VALUES ('$name', '$address', '$email', '$fruit_per_day', '$favourite_fruit', '$brochure')";

			$result=mysqli_query($conn,$insert_que);

			if($result==TRUE)
			{
				echo "Record inserted successfully";
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
