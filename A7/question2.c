/*
   Algorithm:
   START
      Accept a number from the user
      If number is negative, convert it to positive
      Loop from 1 to that number
         Print each number
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
//  Function Name : Display
//  Description   : Prints numbers from 1 to given number
//  Input         : Integer (iNo)
//  Output        : Displays numbers on screen
//  Author        : Sandali Sunil Bhadane
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print numbers from 1 to iNo
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
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

    printf("Enter number:\t");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : 1    2    3    4    5
//
///////////////////////////////////////////////////////////////////
