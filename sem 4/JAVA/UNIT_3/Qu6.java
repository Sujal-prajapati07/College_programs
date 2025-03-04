class Book 
{
    private String title;
    private int numberOfPages;
  
    public int getNumberOfPages() 
    {
      return numberOfPages;
    }
  
    public String getTitle() 
    {
      return title;
    }
  
    public void setNumberOfPages(int numberOfPages) 
    {
      this.numberOfPages = numberOfPages;
    }
  
    public void setTitle(String title) 
    {
      this.title = title;
    }
  }
  
class TextBook extends Book 
{
    private int gradeLevel;
  
    public int getGradeLevel() 
    {
      return gradeLevel;
    }
  
    public void setGradeLevel(int gradeLevel) 
    {
      this.gradeLevel = gradeLevel;
    }
  
  }
  
class Qu6 
{
  public static void main(String[] args) 
  {
      Book book1 = new Book();

      TextBook textBook = new TextBook();

      book1.setTitle("Hundred Truth");
      book1.setNumberOfPages(130);

      textBook.setTitle("Art of living");
      textBook.setNumberOfPages(300);
      textBook.setGradeLevel(5);

      System.out.println("----------------------------------");
      System.out.println("Book Detials ");
      System.out.println("Book title  : " + book1.getTitle());
      System.out.println("Number of pages : " + book1.getNumberOfPages());

      System.out.println("----------------------------------");
      System.out.println("Textbook Details ");
      System.out.println("Textbook Title : " + textBook.getTitle());
      System.out.println("Number of pages : " + textBook.getNumberOfPages());
      System.out.println("Textbook for grade : " + textBook.getGradeLevel());
  
  }
}
