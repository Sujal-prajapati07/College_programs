class Qu25
{
    public static void main(String[] args) 
    {
        String str_int="589";

        String str_double="12.34";

        String str_boolean="false";

        int a=Integer.parseInt(str_int);

        System.out.println("Convert string to int : "+a);

        double b=Double.parseDouble(str_double);

        System.out.println("Convert string to double : "+b);

        boolean c=Boolean.parseBoolean(str_boolean);

        System.out.println("Convert string to boolean : "+c);
    }
}