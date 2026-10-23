//problem: accept number from user perform addtion of digits

import java.util.Scanner;

class Digit
{
    public int sumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo < 0)     //updater
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit ;
            iNo = iNo  / 10;                    
        }

        return iSum;
    }
}

class SumDigitsUsingWhileLoop
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