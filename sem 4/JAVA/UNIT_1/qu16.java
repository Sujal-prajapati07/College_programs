//Write a Java program to display all even numbers from 1 to 100 using for loop.
public class qu16 
{
    public static void main(String[] args) 
    {
        for(int i=1;i<=100;i++)
        {
            if(i%2==0)
            {
                System.out.print(i+"\t");
            }
        }
    }
}
