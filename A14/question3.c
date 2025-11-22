/*
   Algorithm:
   START
      Accept a number from the user
      Initialize count = 0
      Extract each digit using:
         digit = number % 10
      If digit is equal to 2
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
//  Description   : Counts the frequency of digit 2 in the number
//  Input         : Integer (Number)
//  Output        : Integer (Count)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Loop to extract and check digits
    while(iNo != 0)
    {
        iDigit = iNo % 10;      // Extract digit

        if(iDigit == 2)         // Check if digit is 2
        {
            iCount++;           // Increase count
        }

        iNo = iNo / 10;         // Remove last digit
    }

    return iCount;              // Return frequency
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

    printf("Frequency of 2 is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 25222
//  Output : Frequency of 2 is 4
//
///////////////////////////////////////////////////////////////////
