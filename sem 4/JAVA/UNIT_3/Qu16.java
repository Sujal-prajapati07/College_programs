class Qu16 
{
    public static void main(String[] args) 
    {
        String s="Hello world";

        System.out.println("String length is : "+s.length());

        System.out.println("Index : "+s.charAt(3));

        String s1=" Welcome to coading ";

        System.out.println("Concat string is : "+s.concat(s1));

        System.out.println("UpperCase : "+s.toUpperCase());

        System.out.println("LowerCase : "+s.toLowerCase());

        System.out.println("Substring : "+s.substring(2,5));

        System.out.println("Contains : "+s.contains("world"));

        System.out.println("Equals : "+s.equals("Hello world"));

        System.out.println("Indexof : "+s.indexOf("world"));

        System.out.println("Replace : "+s.replace("world", "java"));

        System.out.println("StartWith : "+s.startsWith("Hello"));

        System.out.println("EndWith : "+s.endsWith("java"));

    }
}
