/*
   Algorithm
   START
      Accept a number from user
      If number is negative, convert it to positive
      Use a loop from 2 to the number, increment by 2
         Check if current number divides the input number completely
         If yes, print it (it is an even factor)
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
//  Function Name : DisplayFactors
//  Description   : Used to display all even factors of a given number
//  Input         : Integer (Number)
//  Output        : None (Displays even factors on screen)
//  Author        : Sandali Sunil Bhadane
//  Date          : 09/10/2025
//
///////////////////////////////////////////////////////////////////
void DisplayFactors(int iNo)
{
    int i = 0;                   // Loop counter

    if(iNo <= 0)                 // Input validation
    {
        iNo = -iNo;              // Convert negative to positive
    }

    for(i = 2; i <= iNo; i = i + 2)   // Loop through even numbers
    {
        if((iNo % i) == 0)            // Check if even number is a factor
        {
            printf("%d\t", i);        // Display even factor
        }
    }
}
// End of DisplayFactors()

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

    DisplayFactors(iValue);          // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 12   Output : 2   4   6   12
//  Input : 18   Output : 2   6   18
//  Input : -12  Output : 2   4   6   12
//  Input : 5    Output : (No even factors)
//
//
///////////////////////////////////////////////////////////////////
