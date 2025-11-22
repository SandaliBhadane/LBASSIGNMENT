/* 
   Algorithm
   START
      Accept a number from the user
      Use a loop to print '*' that many times
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
//  Function Name : Accept
//  Description   : It is used to print '*' on the screen given number of times
//  Input         : Integer
//  Output        : None
//  Author        : Sandali Sunil Bhadane
//  Date          : 18/10/2025
//
///////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;                      // Loop counter

    for (iCnt = 1; iCnt <= iNo; iCnt++) // Loop runs from 1 to iNo
    {
        printf("*");
    }
}
// End of Accept()

///////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application.
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                    // To accept number from user
    iValue = 5;                        // Hardcoded input value

    Accept(iValue);                    // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 5   Output : *****
//  Input : 3   Output : ***
//  Input : 1   Output : *
//  Input : 0   Output : (No Output)
//
//
///////////////////////////////////////////////////////////////////
