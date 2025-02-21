import java.util.*;
public class linklist 
{
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<>();

        list.add("Sujal");
        list.add("kirtan");  
        
        System.out.println("link list is = "+list); 

        list.add(2,"purav");

        System.out.println("link list adding purav to particular position is = "+list); 

        LinkedList<String> list2 = new LinkedList<>();

        list2.add("manan");
        list2.add("nihir");
        
        list.addAll(list2); // list = list2 
        // list2.addAll(list);

        System.out.println("link list is = "+list);

        LinkedList<String> list3 = new LinkedList<>();

        list3.add("shub");
        list3.add("chetan");


        list.addAll(0,list3);

        System.out.println("link list is = "+list);


        list.addFirst("alexa");

        System.out.println("link list is = "+list);


        list.addLast("rahul");

        System.out.println("link list is = "+list);

        System.out.println("link list is = "+list3);
        list3.clear();
        System.out.println("Clear list 3 = "+list3);

        boolean res = list.contains("kirtan");
        System.out.println("kirtan is there in  list ? yes or not =  "+res);


    //  Iterator<String> iter = list.descendingIterator(); 
    //  while(iter.hasNext())
    //  {
    //     System.out.println(iter.next()+" ");
    //  }
        //list ko reverse kar dega

        String flag = list.get(2);
        System.out.println("get function = "+flag);

        System.out.println("get first = "+list.getFirst());
        System.out.println("get last = "+list.getLast());


        System.out.println("get last = "+list.indexOf("manan"));
        System.out.println(" last index of = "+list.lastIndexOf("alexa"));




    }
}