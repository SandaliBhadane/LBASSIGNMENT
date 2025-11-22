/*
   Algorithm:
   START
      Accept a number from the user
      If number is negative, convert it to positive
      Loop from -iNo to +iNo
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
//  Description   : Displays numbers from -iNo to +iNo
//  Input         : Integer
//  Output        : Sequence of numbers printed on screen
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

    // Print numbers from -iNo to +iNo
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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

    printf("Enter Number :\t");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : -5  -4  -3  -2  -1  0  1  2  3  4  5
//
///////////////////////////////////////////////////////////////////
