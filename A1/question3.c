/* 
   Algorithm
   START
      Initialize variable i to 5
      While i is greater than or equal to 1
         Display the value of i
         Decrease i by 1
      End While
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
//  Description   : It is used to display numbers from 5 to 1 in reverse order
//  Input         : None
//  Output        : Integer (but no value returned)
//  Author        : Sandali Sunil Bhadane
//  Date          : 18/10/2025
//
///////////////////////////////////////////////////////////////////
int Display()
{
    int i = 0;        // Loop counter
    
    i = 5;            // Initialize counter

    while (i >= 1)    // Loop till i becomes 1
    {
        printf("%d\n", i);
        i--;           // Decrement counter
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
    Display();         // Function call
    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Output:
//  5
//  4
//  3
//  2
//  1
//
///////////////////////////////////////////////////////////////////
