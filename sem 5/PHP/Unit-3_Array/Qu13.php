<?php
    $movies = array(
        array("title" => "Pink Panther", "category" => "Comedy"),
        array("title" => "John English", "category" => "Comedy"),
        array("title" => "Die Hard", "category" => "Action"),
        array("title" => "Expendables", "category" => "Action"),
        array("title" => "The Lord of the Rings", "category" => "Epic"),
        array("title" => "Romeo and Juliet", "category" => "Romance"),
        array("title" => "See no evil hear no evil", "category" => "Comedy")
    );

    foreach ($movies as $movie) 
    {
        echo $movie["title"]." - ".$movie["category"]."<br>";
    }

    echo "<br>Total Movies : ".count($movies);
?>
