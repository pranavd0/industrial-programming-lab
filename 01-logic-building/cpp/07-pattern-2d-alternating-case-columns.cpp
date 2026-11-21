//problem: Print Pattern:
//
//      input: Rows : 4  cols : 4
//
//      output: A   B   C   D
//              a   b   c   d
//              A   B   C   D
//              a   b   c   d

#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char c = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            c = 'a';
        }
        else
        {
            c = 'A';
        }

        for(j = 1; j <= iCol; j++, c++)
        {
            cout<<c<<"\t";
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
