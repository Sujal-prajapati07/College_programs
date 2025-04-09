import java.util.*;

class Qu8 
{
    public static void main(String[] args) 
    {
        int arr[]={20,30,40,10,50};

        Arrays.sort(arr); //array sorted in ascending order

        for(int i=arr.length-1;i>=0;i--)
        {
            System.out.println(arr[i]+" ");
        }
    }
}
