//Approach 1(bussiness logic inside main class and main method):

import java.util.Scanner;       

class AdditionInMainMethod
{
    public static void main(String A[])
    {
        Scanner scanner=null; 
        int iValue1=0;
        int iValue2=0;
        int iResult=0;

        scanner=new Scanner(System.in); 

        System.out.println("Enter First Number : ");
        iValue1=scanner.nextInt();

        System.out.println("Enter Second Number : ");
        iValue2=scanner.nextInt();

        iResult=iValue1+iValue2;        //bussiness logic

        System.out.println("Addition is : "+iResult);

    }
}