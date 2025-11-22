/* 
   Algorithm:
   START
      Accept starting number and ending number from the user
      If starting number or ending number is negative
         Display "Invalid Range" and stop
      If starting number is greater than ending number
         Display "Invalid Range" and stop
      Otherwise
         Add all numbers from start to end
         Return the total sum
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
//  Function Name : SumRange
//  Description   : Calculates the sum of all numbers in the given range
//  Input         : Integer (Start), Integer (End)
//  Output        : Integer (Sum) or -1 for invalid range
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int SumRange(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

    // Check for negative inputs
    if (iNo1 < 0)
    {
        printf("Invalid Range\n");
        return -1;
    }

    if (iNo2 < 0)
    {
        printf("Invalid Range\n");
        return -1;
    }

    // Check if range is valid
    if (iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return -1;
    }

    // Calculate the sum of the range
    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;   // Return sum
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter your starting number:\n");
    scanf("%d", &iValue1);

    printf("Enter your ending number:\n");
    scanf("%d", &iValue2);

    iRet = SumRange(iValue1, iValue2);   // Function call

    if (iRet != -1)    // Display output only if range is valid
    {
        printf("%d is sum of the range\n", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : Start = 3, End = 8
//  Output : 33 is sum of the range
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
