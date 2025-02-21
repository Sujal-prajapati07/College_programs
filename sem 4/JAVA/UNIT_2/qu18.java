// Write a Java program to create a Priority Queue and perform following operations on it:
//  • add()
//  • peek()
//  • poll()
//  • contains()

import java.util.*;

public class qu18 
{
    public static void main(String[] args) 
    {
        PriorityQueue <Integer> pq=new PriorityQueue<>();
        
        pq.add(20);
        pq.add(30);
        pq.add(40);
        pq.add(50);

        System.out.println(pq);

        System.out.println("TOP ELEMENT IS : "+pq.peek()); //Top element

        System.out.println("DELETE ELEMENT is : "+pq.poll()); //DELETE ELEMENET

        System.out.println(pq);

        System.out.println(pq.contains(40));

    }
}
