/*
   Algorithm:
   START
      Accept a number from the user
      If number is negative, convert it to positive
      Loop from 1 to iNo
         If current number is odd
            Display the number
         End If
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
//  Function Name : OddDisplay
//  Description   : Displays all odd numbers up to the given number
//  Input         : Integer (iNo)
//  Output        : Sequence of odd numbers printed on screen
//  Author        : Sandali Sunil Bhadane
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print all odd numbers up to iNo
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
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

    printf("Enter Number :\t");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 10
//  Output : 1   3   5   7   9
//
///////////////////////////////////////////////////////////////////
