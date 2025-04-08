import javax.swing.JOptionPane;

class CheckOddEven
{
    int number;

    CheckOddEven(int n)
    {
        if(n%2==0)
        {
            System.out.println(n+" is even");
            // JOptionPane.showMessageDialog(null,n+" is even");
        }
        else
        {
            System.out.println(n+" is odd");
            // JOptionPane.showMessageDialog(null,n+" is odd");
        }
    }
}
class Qu7 
{
    public static void main(String[] args) 
    {
        int number=Integer.parseInt(JOptionPane.showInputDialog("Enter the number : "));

        CheckOddEven obj=new CheckOddEven(number);
    }    
}
