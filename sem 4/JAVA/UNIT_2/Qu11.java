import java.util.*;

class Admin
{
    String Id;
    int enrollmentNo;
    String name;

    void input()
    {
        Scanner sc=new Scanner(System.in);

            System.out.println("Enter the id : ");
            Id=sc.nextLine();

            System.out.println("Enter the enrollment no : ");
            enrollmentNo=sc.nextInt();

            sc.nextLine();

            System.out.println("Enter the name : ");
            name=sc.nextLine();
    }

    void display()
    {
         System.out.println("id is : "+Id);
         System.out.println("Enrollment no is : "+enrollmentNo);
         System.out.println("Name is : "+name);
    }
}

class Qu11 
{
    public static void main(String[] args) 
    {  
        Admin[] arr=new Admin[5];

        for(int i=0;i<arr.length;i++)
        {
            arr[i]=new Admin();//new admin object
            System.out.println("Enter the Admin details : "+(i+1));
            arr[i].input();
        }

        System.out.println("Details : ");
        for(int i=0;i<arr.length;i++)
        {
           arr[i].display();
        }
    }
}
