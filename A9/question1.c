/*
   Algorithm:
   START
      Accept a number from the user
      If the number is negative, convert it to positive
      Print '*' iNo times
      Print '#' iNo times
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
//  Description   : Prints '*' iNo times and '#' iNo times
//  Input         : Integer
//  Output        : Sequence of '*' and '#' characters
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
void Display(int iNo)
{ 
    int iCnt = 0;

    // Convert negative number to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Print '*' iNo times
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }

    // Print '#' iNo times
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#\t");
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
   int iValue1 = 0;

   printf("Enter Your Number:\n");
   scanf("%d", &iValue1);

   Display(iValue1);
   
   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 4
//  Output : *   *   *   *   #   #   #   #
//
//
///////////////////////////////////////////////////////////////////
