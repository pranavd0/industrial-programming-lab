import java.util.Scanner;       

class FloatLiteralUsage
{
    public static void main(String A[])
    {
        Scanner scanner=null;               
        String sName=null;
        int iAge=0;
        float fMarks=0.0f;           
        
        scanner=new Scanner(System.in); 

        System.out.println("Enter Your Name");
        sName=scanner.next();               //Exception can occour if we give input of multiple words 
        
        System.out.println("Enter Your Age");
        iAge=scanner.nextInt();

        System.out.println("Enter Your Marks");
        fMarks=scanner.nextFloat();

        System.out.println("Welcome:"+sName);
        System.out.println("Your Age is:"+iAge);
        System.out.println("Your Marks are:"+fMarks);
    }
}