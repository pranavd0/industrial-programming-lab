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
};

int main()
{
    // Step 1 : Allocate Memory
    Numbers *numbers1 = new Numbers(5);
    Numbers *numbers2 = new Numbers(7);

    // Step 2 : Use Memory

    // Step 3 : Deallocate Memory
    delete numbers1;
    delete numbers2;

    return EXIT_SUCCESS;
}
    