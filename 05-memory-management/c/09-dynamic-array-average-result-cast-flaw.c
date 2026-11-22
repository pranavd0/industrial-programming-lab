#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return (float)(iSum / iLength);
}

int Summation(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    float fRet = 0.0f;

    printf("Enter number of elements you want : \n");
    scanf("%d",&iSize);

    // Step 1 : Allocate the memory 
    ptr = (int *)malloc(sizeof(int) * iSize);

    // Step 2 : Use the memory
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr, iSize);
    printf("Addition of all elements : %d\n",iRet);
    
    fRet = Average(ptr, iSize);
    printf("Average is : %f\n",fRet);
    
    // Step 3 : Free the memory
    free(ptr);
     
    return EXIT_SUCCESS;
}
