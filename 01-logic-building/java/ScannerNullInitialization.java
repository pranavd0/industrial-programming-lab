import java.util.Scanner;       

class ScannerNullInitialization
{
    public static void main(String A[])
    {
        Scanner scanner=null;               //Always a good programming practice to refer a object of any class with null before using it
        String sName=null;                  //same applies for String(array of character)
        
        scanner=new Scanner(System.in); 

        System.out.println("Enter Your Name");
        sName=scanner.nextLine();            

        System.out.println("Welcome:"+sName);
    }
}