//problem : count Capital Alphabets, small Alphabets, digits in input String

#include<stdio.h>
#include<stdlib.h>

void countFrequency(char *str)
{
    int iCountSmall = 0;
    int iCountCap = 0;
    int iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else            //issue
        {
            iCountDigit++;
        }
        str++;
    }

    printf("Capital Characters : %d\n", iCountCap);
    printf("Small Characters : %d\n", iCountSmall);
    printf("Digits : %d\n", iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s", Arr);

    countFrequency(Arr);
    
    return EXIT_SUCCESS;        
}