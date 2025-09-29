<?php
	abstract class LibraryItem
	{
		protected $bookTitle;

		function __construct($bookTitle)
		{
			$this->bookTitle=$bookTitle;
		}

		abstract function getDetails();
		abstract function borrowItem();
	}

	class Book extends LibraryItem
	{
		function getDetails()
		{
			echo "Book : $this->bookTitle<br>";
		}

		function borrowItem()
		{
			echo "$this->bookTitle borrowed<br>";
		}
	}

	class Magazine extends LibraryItem
	{
		function getDetails()
		{
			echo "Magazine : $this->bookTitle<br>";
		}

		function borrowItem()
		{
			echo "$this->bookTitle borrowed<br>";
		}
	}

	$items=[
		new Book("War and Peace"),new Magazine("New Scientist")
	];

	foreach ($items as $i) 
	{
		echo "-------------------------<br>";
		$i->getDetails();
		$i->borrowItem();
		echo "-------------------------<br>";
	}
?> 