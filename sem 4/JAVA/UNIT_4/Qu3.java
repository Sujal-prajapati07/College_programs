import java.util.*;
class FinalLimitException extends Exception
{
    FinalLimitException(String s)
    {
        super(s);
    }
}

class FindLowest 
{
    void FinalDisplay(int arr[], int Limit)
    {
        for(int i=0; i<Limit; i++)
        {
            for(int j=i+1; j<Limit; j++)
            {
                if(arr[i] > arr[j])
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        System.out.println("\nArray sorted: ");

        for(int i=0; i<Limit; i++)
        {
            System.out.println(arr[i]);
        }
       
        System.out.println("Lowest element: "+arr[0]);
        System.out.println("2nd Lowest element: "+arr[1]); 
    }
}

public class Qu3
{
    public static void main(String[] args)throws FinalLimitException 
    {
        Scanner sc = new Scanner(System.in);
        
        try 
        {
            System.out.print("Enter the number of elements: ");

            int n = sc.nextInt();
            
            if (n < 2) 
            {
                throw new FinalLimitException("At least two numbers are required.");
            }
            
            int arr[] = new int[n];
            System.out.println("Enter " + n + " integer numbers:");
            
            for (int i = 0; i < n; i++) 
            {
                arr[i] = sc.nextInt();
            }
            
            FindLowest obj = new FindLowest();

            obj.FinalDisplay(arr, n);
            
        } 
        catch (FinalLimitException e) 
        {
            System.out.println("Exception: " + e.getMessage());
        } 
        catch (Exception e) 
        {
            System.out.println("Error..." + e);
        } 
        finally 
        {
            sc.close();
        }
    }
}
