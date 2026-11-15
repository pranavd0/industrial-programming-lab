//problem : Find Sum of all even numbers in Given Range

#include<iostream>
using namespace std;

int RangeSumEven(int iNo1, int iNo2)  
{
	//filter
	if (iNo1 > iNo2) 
	{
		return -1;
	}

	if (iNo1 < 0 || iNo2 < 0) 
	{
		return -1;
	}

	int iCnt = 0;
	int iSum = 0;

	for (iCnt = iNo1; iCnt <= iNo2; iCnt++) {
		if (iCnt % 2 == 0) {
			iSum += iCnt;
			iCnt++;
		}
	}

	return iSum;
}

int main() 
{
	int iValue1 = 0;
	int iValue2  = 0;
	int iRet = 0;

	cout<< "Enter the First Number of range\n";
	cin>> iValue1;

	cout<< "Enter the Last Number of range\n";
	cin>> iValue2;

	iRet = RangeSumEven(iValue1, iValue2);

	if (iRet == -1) {
		cout<<"Inavlid Range\n";
		return EXIT_FAILURE;
	}

	cout<<"Sum is : "<< iRet<< "\n";
	return EXIT_SUCCESS;
}


