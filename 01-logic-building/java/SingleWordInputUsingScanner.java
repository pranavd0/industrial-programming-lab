import java.util.Scanner;       

class SingleWordInputUsingScanner
{
    public static void main(String A[])
    {
        Scanner scanner=null;               
        String sName=null;                  
        
        scanner=new Scanner(System.in); 

        System.out.println("Enter Your Name");
        sName=scanner.next();                   //next() method only accepts first word            

        System.out.println("Welcome:"+sName);
    }
}