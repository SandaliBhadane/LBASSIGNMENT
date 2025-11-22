/*
   Algorithm:
   START
      Accept a number from the user
      If the number is negative, convert it to positive
      Set EvenFactorial = 1
      Set OddFactorial  = 1
      Run loop from 1 to iNo
         If number is even, multiply it to EvenFactorial
         Else multiply it to OddFactorial
      Return (EvenFactorial - OddFactorial)
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
//  Function Name : DiffFactorial
//  Description   : Calculates difference between even factorial 
//                  and odd factorial
//  Input         : Integer
//  Output        : Integer (Difference = EvenFact - OddFact)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int DiffFactorial(int iNo)
{ 
    int iCnt = 0;
    int iFact1 = 0;   // For even factorial
    int iFact2 = 0;   // For odd factorial

    // Convert negative to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iFact1 = 1;  // Initialize even factorial
    iFact2 = 1;  // Initialize odd factorial

    // Loop through numbers 1 to iNo
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)     // Even number
        {
            iFact1 = iFact1 * iCnt;
        }
        else                     // Odd number
        {
            iFact2 = iFact2 * iCnt;
        }
    }

    return (iFact1 - iFact2);    // Return difference
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

   iRet = DiffFactorial(iValue1);

   printf("Difference between Even & Odd Factorial of %d is %d", 
           iValue1, iRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Even Factorial = 2 * 4 = 8
//  Odd  Factorial = 1 * 3 * 5 = 15
//  Output : Difference = 8 - 15 = -7
//
///////////////////////////////////////////////////////////////////
