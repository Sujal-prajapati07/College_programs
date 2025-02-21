//Write a Java Program to display all prime odd numbers from 50 to 100.
public class qu17 
{
    public static void main(String[] args) 
    {
        for(int i=50;i<=100;i++)
        {
            if(i%2!=0)
            {
                System.out.print(i+"\t");
            }
        }
    }
}
