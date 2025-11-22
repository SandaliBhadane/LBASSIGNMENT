/* 
   Algorithm
   START
      Accept a number from the user
      If the number is less than 10
         Display "Hello"
      Otherwise
         Display "Demo"
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
//  Function Name : Display
//  Description   : It is used to display "Hello" if number is less than 10, otherwise "Demo"
//  Input         : Integer
//  Output        : None
//  Author        : Sandali Sunil Bhadane
//  Date          : 19/10/2025
//
///////////////////////////////////////////////////////////////////
int Display(int iNo)
{
    if (iNo < 10)                     // Condition check
    {
        printf("Hello");
    }
    else                              // Otherwise block
    {
        printf("Demo");
    }
}
// End of Display()

///////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application.
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                   // To accept user input

    printf("Enter the number: ");
    scanf("%d", &iValue);

    Display(iValue);                  // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 5    Output : Hello
//  Input : 9    Output : Hello
//  Input : 10   Output : Demo
//  Input : 15   Output : Demo
//
//
///////////////////////////////////////////////////////////////////
