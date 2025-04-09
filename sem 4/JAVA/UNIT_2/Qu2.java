import java.util.*;

class Qu2 
{
    public static void main(String[] args) 
    {
        int arr[]=new int[5];

        System.out.println("Enter the array elements : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }

        Set<Integer>set=new HashSet<>();

        //If number is already in the set HashSet will skip 
        for(int num:arr)
        {
            set.add(num);
        }

        System.out.println("Remove Duplicate elements : ");
        for(int num:set)
        {
            System.out.print(num+" ");
        }
    }
}


//Set<Integer>set=new Set<>();
//it is not work because Set is just the rulebook.
//You cannot make an object from a rulebook.
//Set like a rulebook and HashSet is the implementation like an actual class following the rulebook
