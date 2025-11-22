///////////////////////////////////////////////////////////////////
//
//  Required Header File
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Print_Even_Number
//  Input         : Integer (Limit)
//  Output        : Prints even numbers up to the limit
//  Description   : Displays all even numbers from 1 to given limit
//  Author       : Sandali Sunil Bhadane
//  Date         : 30/10/2025
///////////////////////////////////////////////////////////////////
void Print_Even_Number(int ilimit)
{
    // If limit is zero or negative, no processing
    if(ilimit <= 0)
    {
        return;
    }

    int iCnt = 0;

    // Loop to check even numbers
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++ )
    {
        // If number is even
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iLimit = 0;

    // Accept limit from user
    printf("Enter Your Limit\n");
    scanf("%d",&iLimit);

    // Function call
    Print_Even_Number(iLimit);

    return 0;
}
