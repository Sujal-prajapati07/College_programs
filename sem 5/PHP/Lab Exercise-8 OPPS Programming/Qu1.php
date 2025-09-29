<?php
class Employee
{
	private $name;
	private $id;
	private $salary;

	function setEmployee($name,$id,$salary)
	{
		$this->name=$name;
		$this->id=$id;
		$this->salary=$salary;
	}

	function getEmployee()
	{
		echo "-------------------------------<br>";
		echo "Name : $this->name<br>";
		echo "ID : $this->id<br>";
		echo "Salary : $this->salary<br>";
		echo "-------------------------------<br>";
	}
}

$e1=new Employee();
$e1->setEmployee("Sujal",1,50000);

$e2=new Employee();
$e2->setEmployee("Kirtan",2,40000);

$e3=new Employee();
$e3->setEmployee("Purav",3,30000);

$e1->getEmployee();
$e2->getEmployee();
$e3->getEmployee();
?>