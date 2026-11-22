import java.util.Scanner;

class DynamicArrayRuntimeAllocation
{
    public static void main(String A[])
    {
        int iCnt = 0, iSize = 0;
        int ptr[] = null;       // int *ptr = null;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the Number Of Elments :");
        iSize = scanner.nextInt();

        // Step 1 : Allocate the Memory 
        // ptr = (int *) malloc(sizeof(int) * iSize);       --> c
        // ptr = new int[iSize];        --> cpp               
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

        // Step 3 : Deallocate the Memory 
    }
}