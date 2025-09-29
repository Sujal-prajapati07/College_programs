<?php
	class Department
	{
		final public function displayDept()
		{
			echo "Department!!<br>";
		}
	}

	class CSEDepartment extends Department
	{
		//generate error....because subclasses cannot override the method(final keyword)
		// public function displayDept()
		// {
		// 	echo "CSEDepartment!!<br>";
		// }
	}

	$d1=new Department();
	$d1->displayDept();

	$d2 = new CSEDepartment();
	// $d2->displayDept();    //cannot override 
?>