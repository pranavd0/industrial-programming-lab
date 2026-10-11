//Approach 2(bussiness logic inside main class but different method):

import java.util.Scanner;       

class AdditionInstanceMethodCallingError
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
    public int Addition(int iNo1,int iNo2)           
    {
        int iAns=0;
        iAns=iNo1+iNo2;         //bussiness logic
        return iAns;
    }
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

        iResult=Addition(iValue1,iValue2);   //error as we try to call the method without the object  

        System.out.println("Addition is : "+iResult);

    }
}