import java.util.Scanner;

class Numbers
{
    private int Arr[];

    public Numbers(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner scanner = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the Elements");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = scanner.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of the array are:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Summation()
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum += Arr[iCnt];
        }

        return iSum;
    }

    public float Average()
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum += Arr[iCnt];
        }

        return (float)iSum/(float)Arr.length;
    }
}

class ArrayOperationsObjectOriented
{
    public static void main(String A[])
    {
        int iRet = 0;
        float fRet = 0.0f;

        Numbers nobj1 = new Numbers(5);

        nobj1.Accept();
        nobj1.Display();
        
        iRet = nobj1.Summation();
        System.out.println("Summation is :"+ iRet);

        fRet = nobj1.Average();
        System.out.println("Average is :"+ fRet);

        nobj1 = null;
        System.gc();
    }
}
