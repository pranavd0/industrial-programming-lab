//problem: accept number from user perform addtion of digits

import java.util.Scanner;

class Digit
{
    public int sumDigits(int iNo)
    {
        int iSum = 0;

        if(iNo < 0)     //updater
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10); ;
            iNo = iNo  / 10;                    
        }

        return iSum;
    }
}

class SumDigitsDirectExpression
{
    public static void main(String A[])
    {
        int iRet = 0; 
        Scanner scanner = new Scanner(System.in);

        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        iRet = digit.sumDigits(iValue);

        System.out.println("Addition of digits are : " + iRet);
    }
}