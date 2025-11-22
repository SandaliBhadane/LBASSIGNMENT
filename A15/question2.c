/*
   Algorithm:
   START
      Accept a number from the user
      If number is negative
         Convert it to positive
      Initialize count = 0
      Extract each digit:
         digit = number % 10
      If digit is odd (digit % 2 != 0)
         Increase count by 1
      Remove the last digit using number = number / 10
      Repeat until number becomes 0
      Return the count of odd digits
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
//  Function Name : CountOddFrequency
//  Description   : Counts how many odd digits are present in the number
//  Input         : Integer (Number)
//  Output        : Integer (Count of odd digits)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int CountOddFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;              // Convert negative to positive
    }

    // Loop to extract and check digits
    while(iNo != 0)
    {
        iDigit = iNo % 10;       // Extract digit

        if((iDigit % 2) != 0)    // Check if digit is odd
        {
            iCount++;            // Increase count
        }

        iNo = iNo / 10;          // Remove last digit
    }

    return iCount;               // Return total odd digit count
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountOddFrequency(iValue);   // Function call

    printf("Frequency of Odd Digits is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 75348
//  Output : Frequency of Odd Digits is 3
//
//  (Odd digits: 7, 5, 3)
//
///////////////////////////////////////////////////////////////////
