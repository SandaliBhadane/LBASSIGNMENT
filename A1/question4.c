/* 
   Algorithm
   START
      Accept a number from the user
      Check whether the number is divisible by 5
      If divisible, return true
      Otherwise, return false
      Display the result on the screen
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : It is used to check whether a number is divisible by 5 or not
//  Input         : Integer
//  Output        : Boolean (true / false)
//  Author        : Sandali Sunil Bhadane
//  Date          : 18/10/2025
//
///////////////////////////////////////////////////////////////////
bool Check(int iNo)
{
    if((iNo % 5) == 0)       // Check divisibility condition
    {
        return true;         // Return true if divisible by 5
    }
    else
    {
        return false;        // Return false otherwise
    }
}
// End of Check()

///////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application.
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;          // To accept user input
    bool bRet = false;       // To store result (true/false)

    printf("Enter a Number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue);    // Function call

    if (bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 25   Output : Divisible by 5
//  Input : 21   Output : Not Divisible by 5
//  Input : 0    Output : Divisible by 5
//  Input : -10  Output : Divisible by 5
//
///////////////////////////////////////////////////////////////////
