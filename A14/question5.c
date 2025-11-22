/*
   Algorithm:
   START
      Accept a number from the user
      Initialize count = 0
      Extract each digit using:
         digit = number % 10
      If digit is less than or equal to 6
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
//  Function Name : CountFrequency
//  Description   : Counts digits that are less than or equal to 6
//  Input         : Integer (Number)
//  Output        : Integer (Count of digits <= 6)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/11/2025
//
///////////////////////////////////////////////////////////////////
int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Loop to extract each digit
    while(iNo != 0)
    {
        iDigit = iNo % 10;        // Extract digit

        if(iDigit <= 6)           // Check condition
        {
            iCount++;             // Increase count
        }

        iNo = iNo / 10;           // Remove last digit
    }

    return iCount;                // Return total count
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

    iRet = CountFrequency(iValue);   // Function call

    printf("Frequency of Digits less than or equal to 6 is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 654923
//  Output : Frequency of Digits <= 6 is 4
//
//  (Digits counted: 6, 5, 4, 3)
//
///////////////////////////////////////////////////////////////////
