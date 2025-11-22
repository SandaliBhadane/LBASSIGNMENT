/*
   Algorithm
   START
      Accept a number from the user
      If the number is negative, convert it into positive
      Run a loop from the number down to 1 (reverse order)
         Check if the current number divides the input number completely
         If yes, print it (it is a factor)
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
//  Function Name : FactRev
//  Description   : Used to display all factors of a given number in reverse order
//  Input         : Integer (Number)
//  Output        : None (Displays factors on screen)
//  Author        : Sandali Sunil Bhadane
//  Date          : 09/10/2025
//
///////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iFact = 0;                       // Loop counter

    if(iNo <= 0)                         // Input validation
    {
        iNo = -iNo;                      // Convert negative to positive
    }

    for(iFact = iNo; iFact >= 1; iFact--)  // Loop from number to 1
    {
        if((iNo % iFact) == 0)             // Check if iFact is a factor
        {
            printf("%d\t", iFact);         // Display factor
        }
    }
}
// End of FactRev()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                      // To accept user input

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    FactRev(iValue);                     // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 12   Output : 12   6   4   3   2   1
//  Input : 10   Output : 10   5   2   1
//  Input : -6   Output : 6    3   2   1
//  Input : 7    Output : 7    1
//
//
///////////////////////////////////////////////////////////////////
