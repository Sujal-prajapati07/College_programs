// Write a Java program to create a Linkedlist and perform following operations on it:
//  • add()
//  • addAll()
//  • AddFirst()
//  • get()
//  • lastIndexOf()
import java.util.*;
public class qu16 
{
   public static void main(String[] args) 
   {
        LinkedList <Integer> ls=new LinkedList<>();

        ls.add(20);
        ls.add(30);
        ls.add(40);
        ls.add(50);

        System.out.println("---------old LINK LIST---------");

        System.out.println(ls);

        LinkedList <Integer> ls1=new LinkedList<>();

        ls1.add(60);
        ls1.add(70);

        ls.addAll(ls1);

        System.out.println("---------NEW LINK LIST---------");
        System.out.println(ls);

        System.out.println("----------Add First--------------");
        ls1.addFirst(9);
        System.out.println(ls1);

        System.out.println("-----------GET-------------");
        System.out.println(ls1.get(2));

        System.out.println("-------------LastIndexOff--------------");
        System.out.println(ls1.lastIndexOf(2));


   }
}
