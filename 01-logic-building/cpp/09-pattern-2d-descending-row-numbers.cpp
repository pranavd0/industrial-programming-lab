//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: 4   4   4   4
//              3   3   3   3
//              2   2   2   2
//              1   1   1   1

#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {   
        for(j = 1; j <= iCol; j++)
        {
            cout<<i<<"\t";
        }

        cout<<"\n\n";
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the Number of Rows\n";
    cin>>iValue1;

    cout<<"Enter the Number of Columns\n";
    cin>>iValue2;

    pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
