//Create a Priority queue with 10 elements and print the minimum value out of it.

import java.util.PriorityQueue;

public class qu14 
{
    public static void main(String[] args) 
    {
        PriorityQueue <Integer> pq=new PriorityQueue<>();

        pq.add(20);
        pq.add(21);
        pq.add(22);
        pq.add(23);
        pq.add(24);
        pq.add(25);
        pq.add(17);
        pq.add(27);
        pq.add(28);
        pq.add(29);
        pq.add(30);

        System.out.println("MINIMUM VALUE IS : "+pq.peek());
    }
}
