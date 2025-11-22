/*
   Algorithm:
   START
      Accept a number from the user
      Extract each digit using:
         digit = number % 10
      Print the digit
      Divide number by 10 to remove last digit
      Repeat until number becomes 0
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header File
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigits
//  Description   : Displays digits of a number in reverse order
//  Input         : Integer (Number)
//  Output        : Void (Prints digits)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
void DisplayDigits(int iNo)
{
    int iDigit = 0;

    // Loop to extract and print digits
    while(iNo != 0)
    {
        iDigit = iNo % 10;   // Extract last digit
        printf("%d\n", iDigit);

        iNo = iNo / 10;      // Remove last digit
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);   // Function call

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 7521
//  Output :
//           1
//           2
//           5
//           7
//
///////////////////////////////////////////////////////////////////
