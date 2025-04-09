import java.util.*;

class Qu3 
{
    public static void main(String[] args) 
    {
        int arr[]=new int[10];

        System.out.println("Enter the array elements : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }

        Set<Integer>set=new HashSet<>();

        for(int num:arr)
        {
            set.add(num);
        }

        System.out.println("New Length of Array : "+set.size());
        for(int num:set)
        {
            System.out.print(num+" ");
        }
    }
}
