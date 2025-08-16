<!-- <!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		<table>
			<tr>
				<td><th>Name:</th></td>
				<td>
					<input type="text" name="fn" placeholder="First Name" required>
					<input type="text" name="ln" placeholder="Last Name" required>
				</td>
			</tr>
			<tr>
				<td><th>Expected Year of Graduation:</th></td>
				<td>
					<input type="number" name="gy" placeholder="Year of Graduation" required>
				</td>
			</tr>
			<tr>
	            <td><b>Address</b></td>
	            <td>
	            	<input type="text" name="ad1" placeholder="Street Address" required>
	            	<input type="text" name="ad2" placeholder="Address Line2" required>
	        	</td>
        	</tr>
		</table>
	</form>
</body>
</html> -->
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title></title>
</head>
<body>

<form method="post" action="Qu2_2.php">
    <table>
        <tr>
            <td><b>Name</b></td>
            <td>
                <input type="text" name="fn" placeholder="First Name" required>
                <input type="text" name="ln" placeholder="Last Name" required>
            </td>
        </tr>
        <tr>
            <td><b>Expected Year of Graduation</b></td>
            <td><input type="number" name="gy" required></td>
        </tr>
        <tr>
            <td><b>Address</b></td>
            <td><input type="text" name="ad1" placeholder="Street Address" required></td>
        </tr>
        <tr>
            <td></td>
            <td><input type="text" name="ad2" placeholder="Address Line 2"></td>
        </tr>
        <tr>
            <td colspan="2" style="text-align:center;">
                <input type="submit" value="Submit">
            </td>
        </tr>
    </table>
</form>

</body>
</html>
