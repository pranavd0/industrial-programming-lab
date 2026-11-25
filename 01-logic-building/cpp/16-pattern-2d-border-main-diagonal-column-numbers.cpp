//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: 1   2   3   4   
//              1   2       4
//              1       3   4
//              1   2   3   4

#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {   
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                cout << j <<"\t";
            }
            else 
            {
                cout<<"\t";
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
