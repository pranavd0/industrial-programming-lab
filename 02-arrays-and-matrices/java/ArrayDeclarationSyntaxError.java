import java.util.Scanner;

class ArrayDeclarationSyntaxError
{
    public static void main(String A[])
    {
        int Arr[5] = {0};       //error wrong syntex in java
        int iCnt = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the Elements");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]=scanner.nextInt();
        }

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}