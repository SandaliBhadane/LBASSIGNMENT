/*
   Algorithm
   START
      Accept a number from user
      If number is less than or equal to 0, stop
      Use a loop from 1 to that number
         Multiply each counter by 2
         Print the result
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
//  Function Name : PrintEven
//  Description   : Used to print first N even numbers
//  Input         : Integer (Number)
//  Output        : None (Displays even numbers on screen)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;                    // Loop counter
    int iEven = 0;                   // Variable to store even number

    if(iNo <= 0)                     // Input validation
    {
        return;                      // Stop if invalid input
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)   // Loop till iNo
    {
        iEven = iCnt * 2;                 // Generate even number
        printf("%d\t", iEven);            // Display even number
    }
}
// End of PrintEven()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                  // Variable to accept input

    printf("Enter Number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);               // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 5   Output : 2   4   6   8   10
//  Input : 3   Output : 2   4   6
//  Input : 0   Output : (No Output)
//  Input : -4  Output : (No Output)
//
//
///////////////////////////////////////////////////////////////////
