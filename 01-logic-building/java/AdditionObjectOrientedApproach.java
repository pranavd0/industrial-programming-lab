//Approach 3(bussiness logic inside different class):

import java.util.Scanner;       

class AdditionObjectOrientedApproach
{
    public static void main(String A[])
    {
        Scanner scanner=null; 
        int iValue1=0;
        int iValue2=0;
        int iResult=0;

        scanner=new Scanner(System.in); 
        Arithmetic arithmetic=null;

        System.out.println("Enter First Number : ");
        iValue1=scanner.nextInt();

        System.out.println("Enter Second Number : ");
        iValue2=scanner.nextInt();

        arithmetic=new Arithmetic();
        iResult=arithmetic.Addition(iValue1,iValue2);  

        System.out.println("Addition is : "+iResult);

    }
}

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
    public int Addition(
                        int iNo1,
                        int iNo2
                       )       
    {
        int iAns=0;
        iAns=iNo1+iNo2;         //bussiness logic
        return iAns;
    }
}