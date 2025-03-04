package Qu24.SciCalc;

import Qu24.Calc.Calculator;

public class SciCalculator 
{
    void squareroot(int num)
    {
        System.out.println("Square is : "+Math.sqrt(num));
    }

    public static void main(String[] args) 
    {
        Calculator obj=new Calculator();

        obj.sum(5,6);
        obj.subtraction(20, 10);
    }
}
