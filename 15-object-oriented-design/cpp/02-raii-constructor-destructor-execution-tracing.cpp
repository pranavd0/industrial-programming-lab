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
    Numbers numbers1(5);
    Numbers numbers2(7);

    return EXIT_SUCCESS;
}
    