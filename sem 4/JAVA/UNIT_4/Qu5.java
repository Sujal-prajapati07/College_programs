import javax.swing.JOptionPane;

class NoMatchException extends Exception
{
    NoMatchException(String a)
    {
        super(a);
    }
}
class Qu5 
{
    public static void main(String[] args) 
    {
        try{
            String input=JOptionPane.showInputDialog("Enter the string : ");

            if(!"internet".equals(input))
            {
                throw new NoMatchException("String not matched : "+input);
            }

            System.out.println("String matched : "+input);
        }
        catch(NoMatchException e)
        {
            System.out.println(e.getMessage());
        }
    }
}
