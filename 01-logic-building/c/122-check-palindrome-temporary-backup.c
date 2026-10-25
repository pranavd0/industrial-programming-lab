//problem: check whther the number is palindrome

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool reverseNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0; 

    iTemp = iNo;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo /= 10;
    }

    return (iRev == iTemp);
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);   

    bRet = reverseNumber(iValue);

    if(bRet)
    {
        printf("Number is Palindrome \n");
    }
    else
    {
        printf("Number is NOT Palindrome \n");
    }

    return EXIT_SUCCESS;
}