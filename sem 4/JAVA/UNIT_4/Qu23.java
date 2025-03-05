import java.util.*;

class Qu23 {
public static void main(String[] args) 
{
    List<Integer> listOfNumber = new ArrayList<>();
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter 10 positive values in a list : ");

    for (int i = 0; i < 10; i++) 
    {
      int number = scanner.nextInt();
      listOfNumber.add(number);
    }

    Integer total = new Integer(0);

    for (Integer integer : listOfNumber) 
    {
      total=total+integer;
    }

    System.out.println("Total in the list is : " + total);
}
}
