//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: 1   2   3   4
//              5   6   7   8
//              9   10  11  12
//              13  14  15  16

#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 0;

    for(i = iRow, iCount = 1; i >= 1; i--)
    {  
        for(j = 1; j <= iCol; j++)
        {
            cout<<iCount<<"\t";
            iCount++;
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
