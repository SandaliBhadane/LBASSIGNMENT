/*
   Algorithm
   START
      Accept a number from user
      If number is greater than 0
         Display "Number is Positive"
      Else if number is less than 0
         Display "Number is Negative"
      Else
         Display "Number is Zero"
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
//  Function Name : CheckNumberType
//  Description   : Used to check whether a given number is 
//                  positive, negative, or zero
//  Input         : Integer (num)
//  Output        : Prints the type of number on screen
//  Author        : Sandali Sunil Bhadane
//  Date          : 21/10/2025
//
///////////////////////////////////////////////////////////////////
void CheckNumberType(int num)
{
    if(num > 0)                                 // Condition for positive number
    {
        printf("Number is Positive.");
    }
    else if(num < 0)                            // Condition for negative number
    {
        printf("Number is Negative.");
    }
    else                                        // When number is exactly zero
    {
        printf("Number is Zero.");
    }
}
// End of CheckNumberType()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int number = 0;                             // To accept user input

    printf("Enter Number: ");
    scanf("%d", &number);

    CheckNumberType(number);                    // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input :  25   → Output : Number is Positive.
//  Input : -12   → Output : Number is Negative.
//  Input :   0   → Output : Number is Zero.
//
///////////////////////////////////////////////////////////////////
