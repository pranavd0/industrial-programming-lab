#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function Name:  Addition
//  Input        :  Integer, Integer
//  Output       :  Integer
//  Description  :  Performs Addition
//  Date         :  09/10/2026
//  Author       :  Pranav Navnath Dhawale
//
//////////////////////////////////////////////////////////////

int Addition(
                int iNo1,   //First input
                int iNo2    //Second input
            )
            //better formatting of prototype(parameters) of a function
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

    printf("Enter the Second number:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);     
    //business logic inside the function  

    printf("Addition is: %d\n",iResult);

    return EXIT_SUCCESS;
    //better reading of success of a program
}

//////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//      Tested test cases:
//----------------------------------------------------------------
//      input1      input2      output
//----------------------------------------------------------------
//       10           11          21 
//       11           10          21
//       0            11          11
//       11           0           11
//       -9          -10         -19
//---------------------------------------------------------------
//
//////////////////////////////////////////////////////////////
