import java.util.Scanner;       //import only required things

class ScannerNamingConventions
{
    public static void main(String A[])
    {
        Scanner scanner=new Scanner(System.in);    //object name should be same as class name(first letter small) as per Industry Standards

        System.out.println("Enter Your Name");
        String sName=scanner.nextLine();            //variable name should contain datatype's first letter as prefix

        System.out.println("Welcome:"+sName);
    }
}