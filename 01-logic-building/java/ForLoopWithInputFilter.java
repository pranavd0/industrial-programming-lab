import java.util.Scanner;

class ForLoopWithInputFilter
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

        //input filter
        if(iNo<=0)
        {
            System.out.println("Invalid Input");
            return;
        }
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}