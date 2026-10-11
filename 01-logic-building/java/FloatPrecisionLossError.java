import java.util.Scanner;       

class FloatPrecisionLossError
{
    public static void main(String A[])
    {
        Scanner scanner=null;               
        String sName=null;
        int iAge=0;
        float fMarks=0.0;           //error as we are using default value of double for float(i.e loosy conversion)              
        
        scanner=new Scanner(System.in); 

        System.out.println("Enter Your Name");
        sName=scanner.next();  
        
        System.out.println("Enter Your Age");
        iAge=scanner.nextInt();

        System.out.println("Enter Your Marks");
        fMarks=scanner.nextFloat();

        System.out.println("Welcome:"+sName);
        System.out.println("Your Age is:"+iAge);
        System.out.println("Your Marks are:"+fMarks);
    }
}