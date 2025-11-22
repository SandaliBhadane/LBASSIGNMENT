///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description   : Used to find the maximum of two given numbers
//  Input         : Integer, Integer
//  Output        : Integer (Maximum number)
//  Author        : Sandali Sunil Bhadane
//  Date          : 09/10/2025
//
///////////////////////////////////////////////////////////////////
int FindMax(int a, int b)
{
    int iResult = 0;                      // To store the result
    
    if(a > b)                             // Check if first number is greater
    {
        iResult = a;
    }
    else                                  // Otherwise, second number is greater
    {
        iResult = b;
    }

    return iResult;                       // Return the maximum value
}
// End of FindMax()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int num1 = 0, num2 = 0, result = 0;   // To accept and store inputs

    printf("Enter two Numbers: ");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);         // Function call

    printf("Maximum is: %d\n", result);   // Display the result

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input1 : 10   Input2 : 20   Output : 20
//  Input1 : -5   Input2 : 3    Output : 3
//  Input1 : 7    Input2 : 7    Output : 7
//  Input1 : 25   Input2 : 10   Output : 25
//
///////////////////////////////////////////////////////////////////
