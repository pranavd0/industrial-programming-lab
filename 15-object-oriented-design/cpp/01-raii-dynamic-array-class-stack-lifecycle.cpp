#include<iostream>
using namespace std;

class Numbers
{
    public: 
        int *Arr;
        int iLength;

        Numbers(int iSize)
        {
            this->iLength = iSize;
            this->Arr = new int[iLength];
        }

        ~Numbers()
        {
            delete [] this->Arr;
        }
};

int main()
{
    Numbers numbers1(5);
    Numbers numbers2(7);

    return EXIT_SUCCESS;
}
    