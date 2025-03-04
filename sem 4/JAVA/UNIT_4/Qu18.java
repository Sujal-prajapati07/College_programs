class Qu18 
{
    public static void main(String[] args) 
    {
        int primint=4;
        double primdouble=52.63;
        char primchar='s';
        boolean primbool=true;

        Integer intObject=Integer.valueOf(primint);
        Double doubleObject=Double.valueOf(primdouble);
        Character charObjcet=Character.valueOf(primchar);
        Boolean boolObject=Boolean.valueOf(primbool);

        System.out.println("Integer value is : "+intObject);
        System.out.println("Double value is : "+doubleObject);
        System.out.println("Character value is : "+charObjcet);
        System.out.println("Boolean value is : "+boolObject);
    }    
}
