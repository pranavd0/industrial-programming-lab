import java.util.Scanner;

class DynamicArraySummationGC
{  
    public static int Summation(int Arr[])
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum += Arr[iCnt];
        }

        return iSum;
    }

    public static void main(String A[])
    {
        int iCnt = 0, iSize = 0, iRet = 0;
        int ptr[] = null;       
        Scanner scanner = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter the Number Of Elments :");
        iSize = scanner.nextInt();

        // Step 1 : Allocate the Memory 
        ptr = new int[iSize];

        // Step 2 : Use the Memory
        System.out.println("Enter the Elements");
        for(iCnt = 0; iCnt < ptr.length; iCnt++)
        {
            ptr[iCnt] = scanner.nextInt();
        }

        System.out.println("Elements Of the Array Are :");
        for(iCnt = 0; iCnt < ptr.length; iCnt++)
        {
            System.out.println(ptr[iCnt]);
        }

        iRet = Summation(ptr);
        System.out.println("Summation is :"+ iRet);

        // Step 3 : Deallocate the Memory 
        scanner = null;
        ptr = null;

        System.gc();
    }
}