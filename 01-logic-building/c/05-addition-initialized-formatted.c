/*
    Step 1 : Understand the Problem Statement 
    Step 2 : Write the Algorithm 
    Step 3 : Decide the Programming Language 
    Step 4 : Write the Program
    Step 5 : Test the program
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
    int iValue1=0,iValue2=0,iResult=0;
    //intialised the variables with there default values before using it

    printf("Enter the First number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Sirst number:\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;      // Business Logic

    printf("Addition is: %d\n",iResult);
    //better display of result

    return 0;
}
