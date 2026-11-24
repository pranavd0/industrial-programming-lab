//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: 1   2   3   4      
//                  2   3   4  
//                      3   4
//                          4

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
                if(i <= j)
                {
                    System.out.print(j + "\t");
                }
                else
                {
                    System.out.print("\t");
                }
            }

            System.out.print("\n\n");
        }
    }
}

class PatternUpperRightTriangleColumnNumbers
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

