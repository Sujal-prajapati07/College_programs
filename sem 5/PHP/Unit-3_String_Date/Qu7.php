<?php
$s1 = "Sunset is the time of day when our sky meets the outer space solar winds.";
$s2 = "There are blue, pink, and purple swirls, spinning and twisting, like clouds of balloons caught in a blender. I love looking at the clouds.";

echo "<h3>";
//Reverse statement 1
echo strrev($s1)."<br><br>";

//Capitalize first letter
echo ucfirst($s1)."<br><br>";
echo ucfirst($s2)."<br><br>";

//Count 'clouds'
echo substr_count($s2,"clouds")."<br><br>";

//Replace 'pink' with 'red'
echo str_replace("pink","red",$s2)."<br><br>";

//Count words in statement 2
echo str_word_count($s2)."<br><br>";

//Portion to array and sort
$arr = explode(" ","I love looking at the clouds.");
sort($arr);
print_r($arr);
echo "<br>";

//Reverse 'day'
echo strrev("day")."<br><br>";

//Display 'spinning'
preg_match("/\bspinning\b/","purple swirls, spinning and twisting",$match);
echo $match[0]."<br><br>";

//Add string
$s2 .= " I love rainy days.";
echo $s2."<br><br>";

//Remove 'blender'
echo str_replace("blender","",$s2)."<br><br>";
echo "</h3>";
?>
