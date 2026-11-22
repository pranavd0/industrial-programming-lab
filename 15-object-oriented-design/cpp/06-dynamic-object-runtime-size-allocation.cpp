#include<iostream>
using namespace std;

class Numbers
{
    public: 
        int *Arr;
        int iLength;

        Numbers(int iSize)
        {
            cout<<"Inside Constructor\n";
            this->iLength = iSize;
            this->Arr = new int[iLength];
        }

        ~Numbers()
        {
            cout<<"Inside Destructor\n";
            delete [] this->Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter The Elments :\n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the Array are :\n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
};

int main()
{
    int iSize = 0;

    cout<<"Enter the Number Of elements\n";
    cin>>iSize;

    // Step 1 : Allocate Memory
    Numbers *numbers1 = new Numbers(iSize);

    // Step 2 : Use Memory
    numbers1->Accept();
    numbers1->Display();

    // Step 3 : Deallocate Memory
    delete numbers1;

    return EXIT_SUCCESS;
}
    