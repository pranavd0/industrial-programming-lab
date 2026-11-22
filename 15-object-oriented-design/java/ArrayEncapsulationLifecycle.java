import java.util.Scanner;

class Numbers
{
    private int Arr[];

    public Numbers(int iSize)
    {
        this.Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner scanner = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the Elements");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            Arr[iCnt] = scanner.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of the array are:");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

}

class ArrayEncapsulationLifecycle 
{
    public static void main(String A[])
    {
        Numbers nobj1 = new Numbers(5);

        nobj1.Accept();
        nobj1.Display();

        nobj1 = null;
        System.gc();
    }
}
