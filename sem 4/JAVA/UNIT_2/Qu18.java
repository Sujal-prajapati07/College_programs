import java.util.*;

class Qu18 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        PriorityQueue<Integer>PQ=new PriorityQueue<>();

        PQ.add(1);
        PQ.add(2);
        PQ.add(3);
        PQ.add(4);
        PQ.add(5);

        System.out.println("Queue element : "+PQ);
        System.out.println("Top element : "+PQ.peek());
        System.out.println("Remove top element : "+PQ.poll());
        System.out.println("After remove top element : "+PQ);

       System.out.println("Enter the search element : ");
       int check=sc.nextInt();

       if(PQ.contains(check))
       {
            System.out.println(check+" Element present in queue");
       }
       else
       {
            System.out.println(check+" Element not present in queue");
       }

    }
}
