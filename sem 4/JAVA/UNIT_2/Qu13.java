import java.util.*;

class Qu13 
{
    public static void main(String[] args) 
    {
        Stack<Integer>stack=new Stack<>();

        System.out.println("Enter the element : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<5;i++)
        {
            int num=sc.nextInt();

            stack.push(num);
        }

        int min=stack.peek();

        for(int num:stack)
        {
            if(num<min)
            {
                min=num;
            }
        }

        System.out.println("Stack element : "+stack);
        System.out.println("Minimum element is : "+min);
    }
}
