/* 
   Algorithm
   START
      Create a function named Display
      Use a loop to print "Marvellous" six times
      Call the Display function from main
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
//  Description   : It is used to display the word "Marvellous" six times
//  Input         : None
//  Output        : None
//  Author        : Sandali Sunil Bhadane
//  Date          : 18/10/2025
//
///////////////////////////////////////////////////////////////////
void Display()
{
    int i = 0;               // Loop counter

    for(i = 1; i <= 6; i++)  // Loop runs 6 times
    {
        printf("Marvellous\n");
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
    Display();               // Function call
    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Output:
//  Marvellous
//  Marvellous
//  Marvellous
//  Marvellous
//  Marvellous
//  Marvellous
//
///////////////////////////////////////////////////////////////////
