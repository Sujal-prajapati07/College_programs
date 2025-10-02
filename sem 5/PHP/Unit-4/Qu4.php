<?php
    $email = "sujal123@gmail.com";

    if(preg_match("/^[a-zA-Z0-9._-]+@[a-z]+\.[a-z]{2,}$/",$email))
    {
        echo "Valid Email";
    } 
    else 
    {
        echo "Invalid Email";
    }
?>
