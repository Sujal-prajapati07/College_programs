<?php
$conn = mysqli_connect("localhost", "root", "root", "db1");

if (!$conn) {
    die("Connection failed");
}
else
{
	echo "Database connected";
}
?>

<form method="post">
    Enter Customer ID: <input type="text" name="custid">
    <input type="submit" name="search" value="Search">
</form>


<?php
if (isset($_POST['search'])) {
    $id = $_POST['custid'];
    $sql_que = "SELECT * FROM Customer WHERE custid='$id'";
    $result = mysqli_query($conn, $sql_que);

    if ($result->num_rows > 0) {
        while($row = mysqli_fetch_row($result)) 
        {
		    echo "<br>ID: " . $row[0] . 
		         " | Name: " . $row[1] .
		         " | Email: " . $row[2] .
		         " | CountryCode: " . $row[3] .
		         " | Budget: " . $row[4] .
		         " | Used: " . $row[5];
		}
    } else {
        echo "<b>No record Found</b>";
    }
}

$conn->close();
?>
