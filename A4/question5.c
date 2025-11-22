/*
   Algorithm
   START
      Accept a number from the user
      If number is negative, convert it to positive
      Initialize two variables:
         iFactSum = 0  (for sum of factors)
         iNonFactSum = 0 (for sum of non-factors)
      Run loop from 1 to iNo
         If current number divides iNo completely (iNo % iFact == 0)
            Add it to iFactSum
         Else
            Add it to iNonFactSum
      Return (iFactSum - iNonFactSum)
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description   : Used to find difference between summation of 
//                  all its factors and non-factors
//  Input         : Integer (Number)
//  Output        : Integer (Difference)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iFact = 0;           // Loop counter
    int iFactSum = 0;        // To store sum of factors
    int iNonFactSum = 0;     // To store sum of non-factors

    if(iNo <= 0)             // Input validation
    {
        iNo = -iNo;
    }

    for(iFact = 1; iFact <= iNo; iFact++)    // Loop through all numbers
    {
        if((iNo % iFact) == 0)               // If factor
        {
            iFactSum = iFactSum + iFact;
        }
        else                                 // If non-factor
        {
            iNonFactSum = iNonFactSum + iFact;
        }
    }

    return iFactSum - iNonFactSum;           // Return the difference
}
// End of SumNonFact()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;          // To accept user input
    int iRet = 0;            // To store result

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);               // Function call
    printf("Difference is : %d", iRet);      // Display result

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 12
//  Factors     : 1, 2, 3, 4, 6, 12   → Sum = 28
//  Non-Factors : 5, 7, 8, 9, 10, 11  → Sum = 50
//  Difference  : 28 - 50 = -22
//
//  Input : 10
//  Factors     : 1, 2, 5, 10  → Sum = 18
//  Non-Factors : 3, 4, 6, 7, 8, 9 → Sum = 37
//  Difference  : 18 - 37 = -19
//
//  Input : -6
//  Treated as positive 6
//  Factors     : 1, 2, 3, 6 -> Sum = 12
//  Non-Factors : 4, 5 -> Sum = 9
//  Difference  : 12 - 9 = 3
//
///////////////////////////////////////////////////////////////////
