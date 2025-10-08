<?php
interface Drawable 
{
    public function draw();
}

abstract class Shape 
{
    abstract public function calculateArea();
}

class Circle extends Shape implements Drawable 
{
    public $radius;

    function __construct($radius) 
    {
        $this->radius = $radius;
    }

    public function calculateArea() 
    {
        return 3.14 * $this->radius * $this->radius;
    }

    public function draw() 
    {
        echo "Drawing a Circle<br>";
    }
}

class Rectangle extends Shape implements Drawable 
{
    public $length;
    public $width;

    function __construct($length, $width) 
    {
        $this->length = $length;
        $this->width = $width;
    }

    public function calculateArea() 
    {
        return $this->length * $this->width;
    }

    public function draw() 
    {
        echo "Drawing a Rectangle<br>";
    }
}

$circle = new Circle(5);
$rectangle = new Rectangle(4, 6);

$circle->draw();
echo "Circle Area: " . $circle->calculateArea() . "<br><br>";

$rectangle->draw();
echo "Rectangle Area: " . $rectangle->calculateArea() . "<br>";
?>
