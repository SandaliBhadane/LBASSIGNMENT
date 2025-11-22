/*
   Algorithm
   START
      Accept a number from the user
      If number is negative, convert it to positive
      Initialize multiplication result as 1
      Run a loop from 1 to the number
         Check if current number divides input number completely
         If yes, multiply it with the result
      Return the final multiplication result
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
//  Function Name : MultFact
//  Description   : Used to calculate multiplication of all factors of a number
//  Input         : Integer (Number)
//  Output        : Integer (Multiplication of all factors)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int iFact = 0;                  // Loop counter
    int iMulti = 1;                 // Variable to store multiplication of factors

    if (iNo <= 0)                   // Input validation
    {
        iNo = -iNo;                 // Convert negative number to positive
    }

    for(iFact = 1; iFact <= iNo; iFact++)  // Loop from 1 to given number
    {
        if((iNo % iFact) == 0)             // Check if iFact is a factor
        {
            iMulti = iMulti * iFact;       // Multiply the factor
        }
    }

    return iMulti;                         // Return final result
}
// End of MultFact()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                        // To accept user input
    int iRet = 0;                          // To store function result

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);               // Function call

    printf("Multiplication of all factors is: %d\n", iRet);

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 6   Output : 1 * 2 * 3 * 6 = 36
//  Input : 10  Output : 1 * 2 * 5 * 10 = 100
//  Input : -8  Output : 1 * 2 * 4 * 8 = 64
//  Input : 1   Output : 1
//
//
///////////////////////////////////////////////////////////////////
