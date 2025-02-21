import java.util.*;

 class ArrayListOperations {
    public static void main(String[] args) {

        ArrayList<String> list = new ArrayList<>();
        list.add("Apple");
        list.add("Banana");
        list.add("Orange");
        list.add("Mango");
        list.add("Grapes");
        System.out.println(list);
        list.add(2,"stawberry"); // list.set can use instead of add.
        System.out.println(list);

        System.out.println("size = "+list.size());
        // list.clear();
        // System.out.println(list);
        if(list.isEmpty())
        {
            System.out.println("list is empty");
        }
        else
        {
            System.out.println("list is not empty");
        }


        // get() operation - Retrieve the element at index 2
        String elementAtIndex2 = list.get(2);
        System.out.println("Element at index 2: " + elementAtIndex2);

        // contains() operation - Check if "Mango" exists in the list
        boolean containsMango = list.contains("Mango");
        System.out.println("Does the list contain 'Mango'? " + containsMango);

        // remove() operation - Remove the element "Banana" from the list
        list.remove("Banana");
        System.out.println("List after removing 'Banana': " + list);

        // sort() operation - Sort the list in alphabetical order
        Collections.sort(list);
        System.out.println("List after sorting: " +list);




    }
}

