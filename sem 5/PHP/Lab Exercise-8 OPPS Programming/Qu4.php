<?php
class Student 
{
    public $name, $rollNo, $marks;
    function __construct($name, $rollNo, $marks) 
    {
        $this->name = $name;
        $this->rollNo = $rollNo;
        $this->marks = $marks;
    }
}

class Result extends Student 
{
    function grade() 
    {
        if($this->marks >= 75) 
        {
            return "A";
        }
        elseif($this->marks >= 60) 
        {
            return "B";
        }
        elseif($this->marks >= 40)
        {
           return "C"; 
        } 
        else
        {
           return "Fail";  
        } 
    }

    function display() 
    {
        echo "--------------------------------------<br>";
        echo "Name : $this->name<br>";
        echo "Roll No : $this->rollNo<br>";
        echo "Marks : $this->marks<br>";
        echo "Grade : ".$this->grade()."<br>";
        echo "--------------------------------------<br>";
    }
}

$s1 = new Result("Sujal", 193, 85);
$s2 = new Result("Kirtan", 131, 65);
$s3 = new Result("Purav", 133, 78);

$s1->display();
$s2->display();
$s3->display();
?>
