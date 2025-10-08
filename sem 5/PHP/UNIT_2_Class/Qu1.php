<?php
	class Car
	{
		public $brand;
		public $model;
		public $year;

		function __construct($brand,$model,$year)
		{
			$this->brand=$brand;
			$this->model=$year;
			$this->year=$year;
		}

		function display_info()
		{
			echo "Brand : ".$this->brand."<br>";
			echo "Model : ".$this->model."<br>";
			echo "Year : ".$this->year."<br>";
			echo "-----------"."<br>";
		}
	}

	$obj1=new Car("Toyota","Camry","2025");
	$obj2=new Car("Honda","Civic","2026");

	$obj1->display_info();
	$obj2->display_info();
?>