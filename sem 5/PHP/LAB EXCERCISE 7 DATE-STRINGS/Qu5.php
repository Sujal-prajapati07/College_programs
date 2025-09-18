<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php 
		$str="I love PHP programming";

		$pos=strpos($str,"PHP");

		$replaceWord=str_replace("PHP", "JAVA", $str);

		echo "<h1>";
		echo "Original String is : ",$str;
		echo "<br>";
		echo "PHP Position : ",$pos;
		echo "<br>";
		echo "After replace word : ",$replaceWord;
		echo "</h1>";
	?>
</body>
</html>