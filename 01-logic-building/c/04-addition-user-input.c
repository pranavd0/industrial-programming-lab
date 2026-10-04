/*
    step 1 : Understand the Problem Statement 
    step 2 : Write the Algorithm 
    step 3 : Decide the Programming Language 
    step 4 : Write the Program
    step 5 : Test the program
*/

//////////////////////////////////////////////////////////////
//  Step 1 : Understand the Problem Statement 
//           User is going to enter 2 integers 
//           and we have to do addition  
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//  Step 2 : Write the Algorithm
/*
    START
        Accept the first number as no1
        Accept the second number as no2
        Create the variable as Ans to to store the result 
        Perform the addition of two numbers 
        Store it into ans
        Display the result ans
*/
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//  Step 3 : Decide the Programming Language 
//           We select C Programming
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//  Step 4 : Write the Program
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1,iValue2,iResult;

    printf("Enter the First number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Sirst number:\n");
    scanf("%d",&iValue2);

    //here input is taken by user

    iResult = iValue1 + iValue2;      // Business Logic

    printf("%d\n",iResult);

    return 0;
}
