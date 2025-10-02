<?php
    $password = "Sujal@1234";

    if(preg_match("/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[\W_]).{8,}$/", $password))
    {
        echo "Strong Password";
    } 
    else 
    {
        echo "Weak Password";
    }
?>
