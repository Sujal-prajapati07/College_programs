<?php

$arr1 = [1,2,3];
$arr2 = [4,5,6];

echo "Count: ".count($arr1).", Size: ".sizeof($arr2)."<br>";

$merged = array_merge($arr1,$arr2);
echo "Merged: ".implode(" ", $merged)."<br>";

array_push($arr1, 10);
echo "After push: ".implode(" ", $arr1)."<br>";

$last = array_pop($arr1);
echo "After pop: ".implode(" ", $arr1)."<br>";

echo "Position of 5: ".array_search(5,$merged)."<br>";

$nums = [4,2,9,1];
sort($nums); echo "Asc: ".implode(" ",$nums)."<br>";
rsort($nums); echo "Desc: ".implode(" ",$nums)."<br>";

echo "Is 3 in array? ".(in_array(3,$merged)?"Yes":"No")."<br>";
?>

<br>
<hr>

<h3>City Search</h3>
<form method="post">
    Enter city to search: 
    <input type="text" name="city" required>
    <br>
    <button type="submit">Search</button>
</form>

<?php
$cities = ["Delhi","Mumbai","Kolkata","Chennai","Bangalore",
           "Hyderabad","Pune","Ahmedabad","Jaipur","Lucknow"];

sort($cities); // alphabetical
echo "Cities: ".implode(", ", $cities)."<br>";

if($_SERVER["REQUEST_METHOD"]=="POST"){
    $city = $_POST['city'];
    echo "<h1>";
    echo in_array($city,$cities) ? "$city exists" : "$city does not exist";
    echo "</h1>";
}
?>