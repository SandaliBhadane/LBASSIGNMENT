/* 
   Algorithm:
   START
      Accept a limit from the user
      If the limit is less than or equal to 0
         Stop the program
      From 1 to limit
         If the number is odd (number % 2 != 0)
            Print the number
   STOP
*/
///////////////////////////////////////////////////////
//
//  Required Header File
//
///////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : Print_Odd_Number
//  Input         : Integer (Limit)
//  Output        : Prints odd numbers up to the limit
//  Description   : Displays all odd numbers from 1 to 
//                  the given limit
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////
void Print_Odd_Number(int ilimit)
{
    // If limit is zero or negative, no processing
    if(ilimit <= 0)
    {
        return;
    }

    int iCnt = 0;

    // Loop to check odd numbers
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++ )
    {
        // Condition for odd number
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

///////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////
int main()
{
    int iLimit = 0;

    // Accept limit from user
    printf("Enter Your Limit\n");
    scanf("%d",&iLimit);

    // Function call
    Print_Odd_Number(iLimit);

    return 0;
}
