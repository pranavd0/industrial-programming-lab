//building logic for problems on digits using iteration

import java.util.Scanner;

class Digit
{
    public void displayDigits()
    {
        int iNo = 175902;

        while(iNo != 0)
        {
            System.out.println("Digit is : " + (iNo % 10));   
            iNo = iNo  / 10;                
            System.out.println("Number is : "+ iNo);    
        }
    }
}

class DigitExtractionWhileLoopTracing
{
    public static void main(String A[])
    {
        Digit digit = new Digit();

        digit.displayDigits();
    }
}