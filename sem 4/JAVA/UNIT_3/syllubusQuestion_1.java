//Write a java program that will ask the user to input a number and convert digits into words

import java.util.*;
class A 
{
    void digitToWord(int num) 
    {
        String[] s = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        System.out.print(s[num] + " ");
    }
}

class main
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        A obj = new A(); 

        System.out.println("Enter the number:");
        String n = sc.nextLine();

        for (int i=0; i<n.length();i++) 
        {
            char ch = n.charAt(i);

            if (Character.isDigit(ch)) 
            {
                int digit = Character.getNumericValue(ch);
                obj.digitToWord(digit);
            }
            else 
            {
                System.out.println("Invalid input");
                return;
            }
        }
    }
}
