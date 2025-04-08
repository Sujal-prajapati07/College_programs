import javax.swing.JOptionPane;

class Qu6 
{
    public static void main(String[] args) 
    {
        int year=Integer.parseInt(JOptionPane.showInputDialog("Enter the year"));
        
        if(year%4==0)
        {
            System.out.println(year+" is a leap year");
            // JOptionPane.showMessageDialog(null, year+" is a leap year");
        }
        else
        {
            System.out.println(year+" is not a leap year");
            // JOptionPane.showMessageDialog(null, year+" is not a leap year");
        }
    }
}
