<?php
	Class Person
	{
		public $name;
		public $age;

		function __construct($name,$age)
		{
			$this->name=$name;
			$this->age=$age;
		}

		function display()
		{
			echo "Name : ".$this->name."<br>";
			echo "Age : ".$this->age."<br>";
		}
	}

	Class Student extends Person
	{
		public $rollNo;

		function __construct($name,$age,$rollNo)
		{
			parent::__construct($name,$age);
			$this->rollNo=$rollNo;
		}

		function display()
		{
			parent::display();
			echo "Roll NO : ".$this->rollNo."<br>";
		}
	}

	$student=new Student("Sujal",20,"193");
	$student->display();
?>