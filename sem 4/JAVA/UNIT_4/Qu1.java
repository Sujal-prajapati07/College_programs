import java.util.Scanner;

public class Qu1 
{
  public static void main(String[] args) 
  {
    try 
    {
      System.out.println("Enter number : ");
      Scanner scanner = new Scanner(System.in);

      int number = scanner.nextInt();
      int rem;
      int total = 0;

      while (number > 0) 
      {
        rem = number % 10;
        total += rem;
        number /= 0;
      }
      System.out.println("Sum of digit is : " + total);
    } 
    catch (Exception e) 
    {
      System.out.println(e);
    }
  }
}
