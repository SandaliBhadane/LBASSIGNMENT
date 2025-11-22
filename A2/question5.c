/*
   Algorithm
   START
      Accept a number from the user
      Divide the number by 2 and store the remainder
      If remainder is 0, number is even
      Else, number is odd
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
//  Function Name : CheckEven
//  Description   : Used to check whether the given number is even or odd
//  Input         : Integer (Number)
//  Output        : Boolean (True / False)
//  Author        : Sandali Sunil Bhadane
//  Date          : 19/10/2025
//
///////////////////////////////////////////////////////////////////
bool CheckEven(int iNo)
{
    int iRem = 0;                    // Variable to store remainder

    iRem = iNo % 2;                  // Divide number by 2

    if(iRem == 0)                    // If remainder is 0
    {
        return true;                 // Number is even
    }
    else
    {
        return false;                // Number is odd
    }
}
// End of CheckEven()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                  // Variable to accept number
    bool bRet = false;               // Variable to store result

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);        // Function call

    printf("Result is %d\n", bRet);  // Display boolean result (1/0)

    if(bRet == true)
    {
        printf("Number is Even.\n");
    }
    else
    {
        printf("Number is Odd.\n");
    }

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 4   Output : Even
//  Input : 7   Output : Odd
//  Input : 0   Output : Even
//  Input : -6  Output : Even
//
///////////////////////////////////////////////////////////////////
