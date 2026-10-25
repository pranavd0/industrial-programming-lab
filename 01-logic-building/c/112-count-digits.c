//problem: return count of digits of a number

#include<stdio.h>
#include<stdlib.h>

int countDigits(int iNo)
{
    int iCount = 0;
    
    while(iNo != 0)
    {
        iNo= iNo/10;
        iCount++;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = countDigits(iValue);

    printf("Count of digits : %d\n", iRet);

    return EXIT_SUCCESS;
}