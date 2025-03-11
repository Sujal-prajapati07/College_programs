import java.util.*;
class ProductNotFoundException extends Exception 
{
    public ProductNotFoundException(String productId) 
    {
        super(productId);
    }
}

class Product
{
    String[] p_id={"P1","P2","P3","P4"};

    String[] p_name={"Soap","Face wash","watch","Mobile"};

    void func(String productId)throws ProductNotFoundException
    {
        for (int i = 0; i < p_id.length; i++) 
        {
            if (p_id[i].equals(productId)) 
            {
                System.out.println("Product found : " +p_name[i]);
                return;
            }
        }
        throw new ProductNotFoundException(productId);
    }
}

class Qu12
{
    public static void main(String[] args) 
    {
        String Id="P6";      //not found
        // String Id="P2";   //found

        Product obj=new Product();

        try
        {
            obj.func(Id);
        }
        catch(ProductNotFoundException e)
        {
            System.out.println("Product not found : "+e.getMessage());
        }
    }
}