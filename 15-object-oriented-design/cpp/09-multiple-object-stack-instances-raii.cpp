#include<iostream>
using namespace std;

class Numbers
{
    private: 
        int *Arr;
        int iLength;

    public:
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

        int Summation()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iSum += Arr[iCnt];
            }

            return iSum;
        }

        float Average()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iSum += Arr[iCnt];
            }

            return (float)iSum/(float)iLength;
        }
};

int main()
{
    Numbers nobj1(5);
    Numbers nobj2(7);

    nobj1.Accept();
    cout<<"Addition is :"<<nobj1.Summation()<<endl;
    cout<<"Average is :"<<nobj1.Average()<<endl;

    nobj2.Accept();
    cout<<"Addition is :"<<nobj2.Summation()<<endl;
    cout<<"Average is :"<<nobj2.Average()<<endl;

    return EXIT_SUCCESS;
}
    