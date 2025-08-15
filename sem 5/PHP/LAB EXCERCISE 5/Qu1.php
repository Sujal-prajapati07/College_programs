<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form>
	<?php
		$product = 
		[
			["wireless mouse","Blutooth speaker","Notebook","Pen Drive 64GB","Water Bottle","Desk Lamp"],
			[350,1200,80,700,150,950],
			["Electronics","Electronics","Stationary","Electronics","Home & kitchen","Home & kitchen"]
		];

		$name=$product[0];
		$price=$product[1];
		$category=$product[2];
	?>

	<table border="1" cellpadding="10">
		<tr>
			<th>Name</th>
			<th>Price</th>
			<th>Category</th>
		</tr>

		<?php
			for ($i=0; $i <6 ; $i++) 
			{ 
				if($price[$i]>500)
				{
					echo "<tr>";
					echo "<td>$name[$i]</td>";
					echo "<td>$price[$i]</td>";
					echo "<td>$category[$i]</td>";
					echo "</tr>";
				}
			}
		?>
	</table>
	</form>
</body>
</html>