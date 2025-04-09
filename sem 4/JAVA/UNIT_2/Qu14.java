import java.util.*;

class Qu14 
{
    public static void main(String[] args) 
    {
        PriorityQueue<Integer>PQ=new PriorityQueue<>();

        System.out.println("Enter the element : ");
        Scanner sc=new Scanner(System.in);
    
        for(int i=0;i<10;i++)
        {
            int num=sc.nextInt();
            PQ.add(num);
        }

        System.out.println("PriorityQueue Element : "+PQ);

        System.out.println("Minimum Queue value is : "+PQ.peek());
    }
}
