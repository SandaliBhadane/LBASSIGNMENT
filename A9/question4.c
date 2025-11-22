/*
   Algorithm:
   START
      Accept a number from the user
      If the number is negative, convert it to positive
      Set factorial = 1
      Run loop from 1 to iNo
         If the number is odd, multiply it to factorial
      Return the final odd factorial
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
//  Function Name : OddFactorial
//  Description   : Calculates factorial using only odd numbers
//  Input         : Integer
//  Output        : Integer (Odd factorial)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int OddFactorial(int iNo)
{ 
    int iCnt = 0;
    int iFact = 0;

    // Convert negative number to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iFact = 1;   // Initialize factorial

    // Loop from 1 to iNo
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        // Check for odd number
        if ((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;   // Multiply odd numbers only
        }
    }
    
    return iFact;   // Return odd factorial
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

   iRet = OddFactorial(iValue1);

   printf("Odd Factorial of %d is %d", iValue1, iRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 7
//  Output : Odd Factorial of 7 is 105
//           (1 * 3 * 5 * 7 = 105)
//
//
///////////////////////////////////////////////////////////////////
