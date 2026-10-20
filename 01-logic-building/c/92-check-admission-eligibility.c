//problem: check admission elegiblity
//1.age>=17    range should be 0 to 100
//2.marks>=60  range should be 0 to 100

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkAdmission(int iAge, int iMarks)
{
    if(iAge >= 17 && iMarks >= 60)
    {
        return true;
    }
    else 
    {
        return false;   
    }
}

int main()
{
    int iAge = 0, iMarks = 0;
    bool bRet = false;

    printf("Enter your Age\n");
    scanf("%d",&iAge);

    if(iAge<=0||iAge>100)
    {
        printf("Inavlid Age\n");
        return EXIT_FAILURE;
    }

    printf("Enter your Marks\n");
    scanf("%d",&iMarks);

    if(iMarks<0||iMarks>100)
    {
        printf("Inavlid Marks\n");
        return EXIT_FAILURE;
    }


    bRet = checkAdmission(iAge,iMarks);

    if(bRet)
    {
        printf("You are elegible for admssion\n");
    }
    else
    {
        printf("You are NOT elegible for admssion\n");
    }  

    return EXIT_SUCCESS;
}