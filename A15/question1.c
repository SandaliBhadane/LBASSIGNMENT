/*
   Algorithm:
   START
      Accept a number from the user
      If number is negative
         Convert it to positive
      Initialize count = 0
      Extract each digit:
         digit = number % 10
      If digit is even (digit % 2 == 0)
         Increase count by 1
      Divide number by 10 to remove last digit
      Repeat until number becomes 0
      Return the count
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
//  Function Name : CountEvenFrequency
//  Description   : Counts how many even digits are present in the number
//  Input         : Integer (Number)
//  Output        : Integer (Count of even digits)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int CountEvenFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;            // Convert negative to positive
    }

    // Loop to extract and check digits
    while(iNo != 0)
    {
        iDigit = iNo % 10;     // Extract digit

        if((iDigit % 2) == 0)  // Check if digit is even
        {
            iCount++;          // Increase count
        }

        iNo = iNo / 10;        // Remove last digit
    }

    return iCount;            // Return total even digit count
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

    iRet = CountEvenFrequency(iValue);   // Correct function call

    printf("Frequency of even digits is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 86427
//  Output : Frequency of even digits is 3
//
//  (Even digits: 8, 6, 4)
//
///////////////////////////////////////////////////////////////////
