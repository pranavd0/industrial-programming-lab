class InfiniteLoopDecrementFlaw
{
    public static void main(String A[]) 
    {
        Iteration iteration=new Iteration();
        iteration.display();
    }
}

class Iteration
{
    public void display()      
    {
        int iCnt = 0;

        for(iCnt = 6; iCnt <= 6; iCnt--)        //infinite loop
        {
            System.out.println("Jay Ganesh...");
        }
    }
}