// Write a Java program to create an Arraylist with 5 elements and perform following 
// operations on it:
//  • get()
//  • contains()
//  • remove()
//  • sort()

import java.util.ArrayList;
import java.util.Collections;

public class qu15 
{
    public static void main(String[] args) 
    {
        ArrayList <Integer> Al=new ArrayList<>();

        Al.add(5);
        Al.add(7);
        Al.add(6);
        Al.add(8);

        System.out.println(Al);

       
        System.out.println(Al.get(2));

        System.out.println(Al.contains(7));

        System.out.println("--------REMOVE ELEMENT-------");
        Al.remove(3);
        System.out.println(Al);

        System.out.println("---------SORTED LIST---------");
        //collections is class
        Collections.sort(Al);
        // Collections.reverse(Al); //descending order
        System.out.println(Al);
    }
}
