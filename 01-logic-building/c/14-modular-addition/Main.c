#include"Header.h"
//////////////////////////////////////////////////////////////
//
//  Entry Point of The Application
//
//////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0,iValue2=0,iResult=0;

    printf("Enter the First number:\n");
    if(scanf("%d",&iValue1)!=1)
    {
        fprintf(stderr,"Unable to proceed as input is Invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter the Second number:\n");
    if(scanf("%d",&iValue2)!=1)
    {
        fprintf(stderr,"Unable to proceed as input is Invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2);     
    //business logic inside the function  

    printf("Addition is: %d\n",iResult);

    return EXIT_SUCCESS;
    //better reading of success of a program
}
