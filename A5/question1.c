///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : Used to check whether a given number is even or odd
//  Input         : Integer
//  Output        : Prints whether the number is Even or Odd
//  Author        : Sandali Sunil Bhadane
//  Date          : 21/10/2025
//
///////////////////////////////////////////////////////////////////
void CheckEvenOdd(int num)
{
    if((num % 2) == 0)                 // Condition to check even number
    {
        printf("Number is Even");
    }
    else                               // Executes when number is odd
    {
        printf("Number is Odd");
    }
}
// End of CheckEvenOdd()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int number;                        // Variable to accept user input

    printf("Enter number: ");
    scanf("%d", &number);              // Accept number from user

    CheckEvenOdd(number);              // Function call to check even/odd

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 4    → Output : Number is Even
//  Input : 9    → Output : Number is Odd
//  Input : 0    → Output : Number is Even
//  Input : -5   → Output : Number is Odd
//
///////////////////////////////////////////////////////////////////
