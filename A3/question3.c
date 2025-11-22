/*
   Algorithm
   START
      Accept a number from user
      If number is negative, convert it into positive
      Run a loop from 1 to number/2
         Check if current number divides input number completely
         Also check if current number is even
         If both conditions are true, print that number
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
//  Function Name : DisplayEvenFactor
//  Description   : It is used to display all even factors of a number
//  Input         : Integer (Number)
//  Output        : None (Displays even factors on screen)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
    int i = 0;                            // Loop counter

    if(iNo <= 0)                          // Input validation
    {
        iNo = -iNo;                       // Convert negative to positive
    }

    for(i = 1; i <= iNo / 2; i++)         // Loop till half of the number
    {
        if((iNo % i == 0) && (i % 2 == 0))  // Check if i is even factor
        {
            printf("%d\t", i);              // Display even factor
        }
    }
}
// End of DisplayEvenFactor()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                        // To accept user input

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);             // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 12   Output : 2   4   6
//  Input : 18   Output : 2   6
//  Input : -20  Output : 2   4   10
//  Input : 7    Output : (No even factors)
//
//
///////////////////////////////////////////////////////////////////
