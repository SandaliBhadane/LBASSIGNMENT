/* 
   Algorithm
   START
      Accept a number from the user
      If the number is negative, convert it to positive
      While the number is greater than 0
         Print '*'
         Decrease the number by 1
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
//  Description   : It is used to display '*' on the screen given number of times
//  Input         : Integer
//  Output        : None
//  Author        : Sandali Sunil Bhadane
//  Date          : 19/10/2025
//
///////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 0)                  // Updator - to handle negative input
    {
        iNo = -iNo;
    }

    while (iNo > 0)              // Loop runs until iNo becomes 0
    {
        printf("*");
        iNo--;                   // Decrement the counter
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
    int iValue = 0;              // To accept user input

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);             // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 5    Output : *****
//  Input : 3    Output : ***
//  Input : 0    Output : (No Output)
//  Input : -4   Output : ****
//
//
///////////////////////////////////////////////////////////////////
