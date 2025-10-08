<?php
	class Book
	{
		public $title;
		public $author;

		function __construct($title,$author)
		{
			$this->title=$title;
			$this->author=$author;
			echo "-------------------------------"."<br>";
			echo "Book title : ".$this->title."<br>";
			echo "Book author : ".$this->author."<br>";
			echo "-------------------------------"."<br>";
		}

		function __destruct()
		{
			echo "GoodBye"."<br>";
		}
	}

	$obj1=new Book("Wings of fire","Dr.kalam");
?>