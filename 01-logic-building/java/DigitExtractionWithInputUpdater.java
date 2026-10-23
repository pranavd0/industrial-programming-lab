import java.util.Scanner;

class Digit
{
    public void displayDigits(int iNo)
    {
        int iDigit = 0;

        if(iNo < 0)     //updater
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;   
            iNo = iNo  / 10;                
            System.out.println(iDigit);    
        }
    }
}

class DigitExtractionWithInputUpdater
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);

        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        digit.displayDigits(iValue);
    }
}