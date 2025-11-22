/* 
   Algorithm:
   START
      Accept a number from the user
      If number is less than or equal to 0
         Stop execution
      Otherwise
         From 1 to number/2
            If current number divides the input number evenly
               Print the current number (it is a factor)
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header File
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Print_Factor
//  Description   : Displays all factors of the given number
//  Input         : Integer (Number)
//  Output        : None (Prints factors)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
void Print_Factor(int iNo)
{
    // Negative or zero check
    if (iNo <= 0)
    {
        return;
    }

    int iCnt = 0;

    // Loop runs till iNo/2 because no factor except the number itself
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)   // Factor check
        {
            printf("%d\t", iCnt);
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
    int iValue = 0;

    printf("Enter your number:\n");
    scanf("%d", &iValue);

    Print_Factor(iValue);   // Function call

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 24
//  Output : 1   2   3   4   6   8   12
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
