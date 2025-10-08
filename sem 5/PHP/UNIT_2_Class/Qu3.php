<?php
	class MathOperations
	{
		const pi=3.14159;

		public static function areaOfCircle($r)
		{
			return self::pi*$r*$r;
		}
	}

	$r=4;
	echo "Area of circle : ".MathOperations::areaOfCircle($r);
?>