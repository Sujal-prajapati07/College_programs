<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<h1>Restaurant Menu</h1>
	<form method="post">
		<?php
			$menuItems=[
				['Starters','Starters','Main Course','Main course','
				Desert','Desert'],
				['Spring Roll','Paneer Tikka','Butter Paneer','Veg Biryani','Gulab Jamun','Ice Cream'],
				[120,180,250,200,60,80],
				['<input type="number" name="Qtd[]" required>',
				 '<input type="number" name="Qtd[]" required>',
				 '<input type="number" name="Qtd[]" required>',
				 '<input type="number" name="Qtd[]" required>',
				 '<input type="number" name="Qtd[]" required>',
				 '<input type="number" name="Qtd[]" required>']
			];
		$Category=$menuItems[0];
		$Item=$menuItems[1];
		$Price=$menuItems[2];
		$Quantity=$menuItems[3];
		?>

	<table border="1" cellpadding="10">
		<tr>
			<th>Category</th>
			<th>Item</th>
			<th>Price</th>
			<th>Quantity</th>
		</tr>

		<?php
			for ($i=0; $i <6 ; $i++) 
			{ 
				echo "<tr>";
				echo "<td>$Category[$i]</td>";
				echo "<td>$Item[$i]</td>";
				echo "<td>$Price[$i]</td>";
				echo "<td>$Quantity[$i]</td>";
				echo "</tr>";
			}
		?>
	</table>
	<br>
	<input type="submit" value="Generate Bill" name="generate">
	</form>

	<?php
	if(isset($_POST['generate']))
	{
		$qArray=$_POST['Qtd'];
		$subtotal=0;

		echo "<h2>Your Bill</h2>";
		echo "<table border='1' cellpadding='10'>

		<tr>
			<th>Item</th>
			<th>Quantity</th>
			<th>Price</th>
			<th>Total</th>
		</tr>
		";

		for ($i=0; $i<6 ; $i++) 
		{ 
			$quntity=max(0,(int)$qArray[$i]);//remove negative number

			if($quntity>0)
			{
				
				$total=$quntity*$Price[$i];
				$subtotal+=$total;

				echo "<tr>
						<td>$Item[$i]</td>
						<td>$quntity</td>
						<td>$Price[$i]</td>
						<td>$total</td>
					  </tr>";
			}
		}

		$gst = $subtotal * 0.18;
		$grandTotal = $subtotal + $gst;

		echo "<tr>
				<th colspan='3'>Subtotal</th>
				<td>$subtotal</td>
			  </tr>";
		echo "<tr>
				<th colspan='3'>GST(18%)</th>
				<td>$gst</td>
			  </tr>";
		echo "<tr>
				<th colspan='3'>Grand Total</th>
				<td>$grandTotal</td>
			  </tr>";
		echo "</table>";
	}
	?>
</body>
</html>