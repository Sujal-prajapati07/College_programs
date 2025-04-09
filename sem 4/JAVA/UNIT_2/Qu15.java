import java.util.*;

class Qu15 
{
    public static void main(String[] args) 
    {
        ArrayList<Integer>list=new ArrayList<>();

        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the elements : ");

        for(int i=0;i<5;i++)
        {
            int num=sc.nextInt();
            list.add(num);
        }

        System.out.println("List is : "+list);

        System.out.println("Get : "+list.get(3));

        System.out.println("Enter the list to check : ");
        int check=sc.nextInt();

        if(list.contains(check))
        {
            System.out.println(check+" Present in list");
        }
        else
        {
            System.out.println(check+" Not Present in list");
        }

        list.remove(2);

        System.out.println("After removing second index element "+list);

        Collections.sort(list);

        System.out.println("Sorted list : "+list);

    }
}
