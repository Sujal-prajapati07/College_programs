class Qu18 
{
    public static void main(String[] args) 
    {
        int intPrimitive = 25;
        double doublePrimitive = 3.14;
        char charPrimitive = 'S';
        boolean booleanPrimitive = true;

        Integer intWrapper = Integer.valueOf(intPrimitive);
        Double doubleWrapper = Double.valueOf(doublePrimitive);
        Character charWrapper = Character.valueOf(charPrimitive);
        Boolean booleanWrapper = Boolean.valueOf(booleanPrimitive);

        System.out.println("------------------------------------");
        System.out.println("Integer : " + intWrapper);
        System.out.println("Double : " + doubleWrapper);
        System.out.println("Character : " + charWrapper);
        System.out.println("Boolean : " + booleanWrapper);

    }
}
