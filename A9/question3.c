/*
   Algorithm:
   START
      Accept a number from the user
      If the number is negative, convert it to positive
      Set factorial = 1
      Run loop from 1 to iNo
         If the number is even, multiply it to factorial
      Return the final even factorial
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
//  Function Name : EvenFactorial
//  Description   : Calculates factorial using only even numbers
//  Input         : Integer
//  Output        : Integer (Even factorial)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int EvenFactorial(int iNo)
{ 
    int iCnt = 0;
    int iFact = 0;

    // Convert negative number to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iFact = 1;   // Initialize factorial

    // Loop through numbers 1 to iNo
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        // Check for even number
        if ((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;  // Multiply even numbers only
        }
    }
    return iFact;  // Return even factorial
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
   int iValue1 = 0;
   int iRet = 0;

   printf("Enter Your Number:\n");
   scanf("%d", &iValue1);

   iRet = EvenFactorial(iValue1);

   printf("Even Factorial of %d is %d", iValue1, iRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 6
//  Output : Even Factorial of 6 is 48
//           (2 * 4 * 6 = 48)
//
//
///////////////////////////////////////////////////////////////////
