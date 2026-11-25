//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: *   *   *   *   
//              *   #   *   *
//              *   *   $   *
//              *   *   *   *

#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {   
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i + j == iCol + 1)
            {
                cout << "*\t";
            }
            else if(i + j < iCol + 1)
            {
                cout<<"#\t";
            }
            else if( i + j > iCol + 1)
            {
                cout<<"$\t";
            }
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
