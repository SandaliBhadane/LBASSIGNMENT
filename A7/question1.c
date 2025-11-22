/*
   Algorithm:
   START
      Accept a number from user
      Loop from 1 to that number
         Print pattern *$
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
//  Function Name : Pattern
//  Description   : Prints pattern of *$ for given number of times
//  Input         : Integer 
//  Output        : Displays pattern
//  Author        : Sandali Sunil Bhadane
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;

    // Loop to print pattern *$ iNo times
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*$\t");
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 4
//  Output : *$	*$	*$	*$
//
///////////////////////////////////////////////////////////////////
