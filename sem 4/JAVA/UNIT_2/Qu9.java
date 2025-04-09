import java.util.*;

class searchElement
{
    void search(int arr[],int target)
    {
        boolean found=false;

        System.out.println("----------------------");
        
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==target)
            {
                System.out.println(target+" Element found at position "+(i+1));
                found=true;
                break;
            }
        }

        System.out.println("----------------------");

        if(!found)
        {
            System.out.println(target+" element not found in the array");
        }

        
    }
}
class Qu9 
{
    public static void main(String[] args) 
    {
        int arr[]=new int[5];

        System.out.println("Enter the array element : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }

        System.out.println("Enter the element you want the search : ");
        int target=sc.nextInt();

        searchElement obj=new searchElement();

        obj.search(arr, target);
    }
}
