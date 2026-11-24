//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: $   #   #   #    
//              *   $   #   # 
//              *   *   $   # 
//              *   *   *   $

import java.util.Scanner;

class Pattern
{
    void pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j > i)                       //upper triangle
                {
                    System.out.print("*\t");
                }
                else if (i == j)
                {
                    System.out.print("$\t");        //diagonal
                }
                else 
                {
                    System.out.print("#\t");        //lower triangle
                }
            }

            System.out.print("\n\n");
        }
    }
}

class PatternDiagonalDollarTriangleSplit
{
    public static void main(String A[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner scanner = new Scanner(System.in);
        Pattern pat = new Pattern();

        System.out.println("Enter the Number of Rows");
        iValue1 = scanner.nextInt();

        System.out.println("Enter the Number of Columns");
        iValue2 = scanner.nextInt();

        pat.pattern(iValue1, iValue2);
    }
}

