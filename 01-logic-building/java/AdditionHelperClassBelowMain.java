//Approach 3(bussiness logic inside different class):

import java.util.Scanner;       

class AdditionHelperClassBelowMain
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

        iResult=Arithmetic.Addition(iValue1,iValue2);  

        System.out.println("Addition is : "+iResult);

    }
}

//good programming conviention to write other classes below the main class 
//as the compiler tries to find the main method at the starting of the program 
class Arithmetic 
{
    //////////////////////////////////////////////////////////////
    //
    //  Method Name  :  Addition
    //  Class Name   :  Arithmetic
    //  Input        :  Integer, Integer
    //  Output       :  Integer
    //  Description  :  Performs Comparison
    //  Date         :  11/10/2026
    //  Author       :  Pranav Navnath Dhawale
    //
    //////////////////////////////////////////////////////////////
    public static int Addition(         //no need of static keyword as we can easily create object of this class
                               int iNo1,
                               int iNo2
                              )       
    {
        int iAns=0;
        iAns=iNo1+iNo2;         //bussiness logic
        return iAns;
    }
}