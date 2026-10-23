//problem: accept number from user and count number of digits in number

import java.util.Scanner;

class Digit
{
    public int countDigits(int iNo)
    {
        int iCount = 0;

        if(iNo < 0)     //updater
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iNo = iNo  / 10;  
            iCount++;                  
        }

        return iCount;
    }
}

class CountDigitsQuotientOptimized
{
    public static void main(String A[])
    {
        int iRet = 0; 
        Scanner scanner = new Scanner(System.in);

        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        iRet = digit.countDigits(iValue);

        System.out.println("Number of digits are : " + iRet);
    }
}