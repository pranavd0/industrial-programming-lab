//problem: convert dollar to ruppee (1 dollar = 70 ruppes)

#include<stdio.h>
#include<stdlib.h>

int dollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of Dollar\n");
    scanf("%d",&iValue);

    iRet = dollarToINR(iValue);

    printf("The vAlue of Dollar in Ruppee : %d\n", iRet);

    return EXIT_SUCCESS;
}