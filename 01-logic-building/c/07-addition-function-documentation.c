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

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name:  Addition
//  Input        :  Integer, Integer
//  Output       :  Integer
//  Description  :  Performs Addition
//  Date         :  04/10/2026
//  Author       :  Pranav Navnath Dhawale
//
//////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns= 0;

    iAns=iNo1+iNo2;         // Business Logic

    return iAns;
}

//////////////////////////////////////////////////////////////
//
//  Entry Point of The Application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0,iResult=0;

    printf("Enter the First number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Sirst number:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);     
    //business logic inside the function  

    printf("Addition is: %d\n",iResult);

    return 0;
}
