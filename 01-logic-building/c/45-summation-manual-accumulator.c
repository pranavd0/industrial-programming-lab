#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;
    int iSum = 0;

    iCnt=1;
    
    //iSum=iSum+1;  -> 1
    iSum = iSum + iCnt;
    iCnt++;     //2

    //iSum=1+2;     -> 3
    iSum = iSum + iCnt;
    iCnt++;     //3

    //iSum=3+3;     -> 6
    iSum = iSum + iCnt;
    iCnt++;     //4

    //iSum=6+4;     ->10  
    iSum = iSum + iCnt;
    iCnt++;     //5

    printf("%d\n",iSum);

    return EXIT_SUCCESS;
}