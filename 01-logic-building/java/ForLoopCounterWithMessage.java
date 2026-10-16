import java.util.Scanner;

class ForLoopCounterWithMessage
{
    public static void main(String A[]) 
    {
        Scanner scanner;
        int iCount=0;
        Iteration iteration=new Iteration();

        System.out.println("Enter the Count");

        scanner = new Scanner(System.in);

        iCount=scanner.nextInt();

        iteration.display(iCount);
    }
}

class Iteration
{
    public void display(int iNo)      
    {
        int iCnt=0;
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            System.out.println("-------------");
            System.out.println(iCnt + ":Jay Ganesh...");
            //printf("%d:Jay Ganesh...\n",iCnt)
            System.out.println("-------------");
        }
    }
}