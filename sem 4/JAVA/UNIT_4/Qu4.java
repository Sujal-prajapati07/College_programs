import javax.swing.JOptionPane;

class oddException extends Exception
{
    oddException(String a) 
    {
        super(a);
    }
}

class Qu4
{
    public static void main(String[] args)throws Exception
    {
        int counter=0;
        for (int i=1;i<=5;i++)
        {
            try
            {
                String input=JOptionPane.showInputDialog("Enter the number : "+i);

                int num=Integer.parseInt(input);

                if(num%2!=0)
                {
                    throw new oddException("Odd number : "+num);
                }

                System.out.println("even number : "+num);
            }
            catch(oddException e)
            {
                System.out.println(e.getMessage());
                counter++;
            }
            catch(NumberFormatException e)
            {
                System.out.println(e.getMessage());
            }
        }
        System.out.println("odd number is : "+counter);
    }
}
