//problem: calculate grade
//------------------------
//   Marks       Grade
//------------------------
//  90-100        A
//  75-89         B
//  60-74         C
//  40-59         D
//  Below 40     Fail
//------------------------

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* checkGrade(int iNo)
{
    if(iNo > 100 || iNo < 0)        //filter
    {
        printf("Please Enter Valid Marks\n");
        return NULL;
    }

    char* cRet = malloc(5 * sizeof(char));

    if(cRet == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    if(iNo >= 90)
    {
        cRet[0] = 'A';
        cRet[1] = '\0';
    }
    else if(iNo >= 75)
    {
        cRet[0] = 'B';
        cRet[1] = '\0';
    }
    else if(iNo >= 60)
    {
        cRet[0] = 'C';
        cRet[1] = '\0';
    }
    else if(iNo >= 40)
    {
        cRet[0] = 'D';
        cRet[1] = '\0';
    }
    else
    {
        strcpy(cRet, "Fail");
        cRet[5] = '\0';
    }

    return cRet;
}

int main()
{
    int iMarks = 0;
    char* pRet = NULL;

    printf("Enter the Marks\n");
    scanf("%d",&iMarks);

    pRet = checkGrade(iMarks);

    if(pRet != NULL)
    {
        printf("Your Grade is : %s\n", pRet);

        free(pRet);
    }

    return EXIT_SUCCESS;
}