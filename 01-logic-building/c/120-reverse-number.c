//problem : reverse the number

#include<stdio.h>
#include<stdlib.h>

int reverseNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0; 

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo /= 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);   

    iRet = reverseNumber(iValue);

    printf("Reverse number is : %d\n",iRet);

    return EXIT_SUCCESS;
}