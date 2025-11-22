/*
   Algorithm
   START
      Accept a number from the user
      If the number is negative, convert it to positive
      Initialize sum = 0
      Run a loop from 1 to the given number
         If the current number is NOT a factor (iNo % iFact != 0)
            Add it to sum
      Return the final sum
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
//  Description   : Used to calculate summation of all non-factors of a number
//  Input         : Integer
//  Output        : Integer
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iFact = 0;                      // Loop counter
    int iSum  = 0;                      // To store summation of non-factors

    if(iNo <= 0)                        // Input validation
    {
        iNo = -iNo;                     // Convert negative to positive
    }

    for(iFact = 1; iFact <= iNo; iFact++)   // Loop from 1 to number
    {
        if((iNo % iFact) != 0)              // If not a factor
        {
            iSum = iSum + iFact;            // Add to sum
        }
    }

    return iSum;                         // Return final summation
}
// End of SumNonFact()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                     // To accept user input
    int iRet   = 0;                     // To store result

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);          // Function call
    printf("Summation is : %d", iRet);  // Display result

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 12   Output : 50
//  Explanation : Non-factors of 12 are 5,7,8,9,10,11
//                Sum = 5+7+8+9+10+11 = 50
//
//  Input : 10   Output : 37
//  Explanation : Non-factors are 3,4,6,7,8,9
//                Sum = 37
//
//  Input : -6   Output : 14
//
//
///////////////////////////////////////////////////////////////////
