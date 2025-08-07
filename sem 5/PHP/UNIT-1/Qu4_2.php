<?php
	$s1=$_POST['str1'];
	$s2=$_POST['str2'];
	$s3=$_POST['str3'];
	$s4=$_POST['str4'];
	$s5=$_POST['str5'];

	$Concate_string=$s1." ".$s2." ".$s3." ".$s4." ".$s5;
	echo "<table border='1'>
		<tr>
			<td>String Variable</td>
			<td>Value</td>
		</tr>
		<tr>
			<td>String 1</td>
			<td>$s1</td>
		</tr>
		<tr>
			<td>String 2</td>
			<td>$s2</td>
		</tr>
		<tr>
			<td>String 3</td>
			<td>$s3</td>
		</tr>
		<tr>
			<td>String 4</td>
			<td>$s4</td>
		</tr>
		<tr>
			<td>String 5</td>
			<td>$s5</td>
		</tr>
		<tr>
			<td>Concate String</td>
			<td>$Concate_string</td>
		</tr>
	</table>";
?>