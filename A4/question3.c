/*
   Algorithm
   START
      Accept a number from the user
      If the number is negative, convert it into positive
      Run a loop from 1 to the number
         Check if the current number does NOT divide the input number completely
         If yes, print it (it is a non-factor)
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
//  Function Name : NonFact
//  Description   : Used to display all non-factors of a given number
//  Input         : Integer (Number)
//  Output        : None (Displays non-factors on screen)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
void NonFact(int iNo)
{
    int iFact = 0;                       // Loop counter

    if(iNo <= 0)                         // Input validation
    {
        iNo = -iNo;                      // Convert negative to positive
    }

    for(iFact = 1; iFact <= iNo; iFact++)   // Loop from 1 to number
    {
        if((iNo % iFact) != 0)              // Check if iFact is not a factor
        {
            printf("%d\t", iFact);          // Display non-factor
        }
    }
}
// End of NonFact()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                      // To accept user input

    printf("Enter Number: ");
    scanf("%d", &iValue);

    NonFact(iValue);                     // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 12   Output : 5   7   8   9   10   11
//  Input : 10   Output : 3   4   6   7   8   9
//  Input : -6   Output : 4   5
//  Input : 7    Output : 2   3   4   5   6
//
//
///////////////////////////////////////////////////////////////////
