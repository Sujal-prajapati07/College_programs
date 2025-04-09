import java.util.*;

class smallElement
{
    void check()
    {
        int arr[]=new int[10];

        System.out.println("Enter the 10 array elements : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<arr.length;i++)
        {
           arr[i]=sc.nextInt(); 
        }

        int small=arr[0]; 

        for(int i=1;i<arr.length;i++)
        {
            if(arr[i]<small) //check every array element
            {
                small=arr[i];
            }
        }

        System.out.println("Smallest element is : "+small);
    }
}

class Qu1
{
    public static void main(String[] args) 
    {
        smallElement obj=new smallElement();

        obj.check();
    }
}