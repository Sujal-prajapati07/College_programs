import java.util.*;

class Qu16 
{
    public static void main(String[] args) 
    {
        LinkedList<String>list=new LinkedList<>();

        list.add("Java");
        list.add("C++");
        list.add("Python");
        list.add("HTML");
        
        System.out.println("LinkedList after add : " + list);

        LinkedList<String> newList = new LinkedList<>();
        newList.add("AI");
        newList.add("React");

        list.addAll(newList);
        System.out.println("LinkedList after addAll : " + list);

        list.addFirst("Oracle");
        System.out.println("LinkedList after addFirst : " + list);

        System.out.println("Element at index 2: " + list.get(2));

        System.out.println("Last index of 'HTML': " + list.lastIndexOf("HTML"));
    }
}
