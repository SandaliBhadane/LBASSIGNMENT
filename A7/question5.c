/*
   Algorithm:
   START
      Accept a number from the user
      If number is negative, convert it to positive
      Loop from 1 to 5
         Multiply the number by the loop counter
         Display the result
      End Loop
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
//  Function Name : MultipleDisplay
//  Description   : Displays first 5 multiples of a given number
//  Input         : Integer (iNo)
//  Output        : Sequence of multiples printed on screen
//  Author        : Sandali Sunil Bhadane
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Display first 5 multiples of the number
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
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

    printf("Enter Number :\t");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : 5   10   15   20   25
//
//  Input  : -3
//  Output : 3   6   9   12   15
//
///////////////////////////////////////////////////////////////////
