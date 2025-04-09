import java.util.*;

class Qu6 
{
    public static void main(String[] args) 
    {
        int arr[][]=new int[3][3];

        System.out.println("Enter the array elements : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }

        System.out.println("--------------------");

        System.out.println("Print the array : ");
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }

        int leftToRight=0;
        int rightToleft=0;

        for(int i=0;i<arr.length;i++)
        {
            leftToRight+=arr[i][i];
            rightToleft+=arr[i][(arr.length-1)-i];
        }

        System.out.println("--------------------");
        
        System.out.println("Left To Right Diagnol Sum is : "+leftToRight);
        System.out.println("Right To Left Diagnol Sum is : "+rightToleft);
    }
}

// 1 2 3
// 4 5 6 
// 7 8 9

//arr[i][(arr.length-1)-i]
//i=0 then (3-1)-0 = 2 = arr[0][2]
//i=1 then (3-1)-1 = 1 = arr[1][1]
//i=2 then (3-1)-2 = 0 = arr[2][0]
