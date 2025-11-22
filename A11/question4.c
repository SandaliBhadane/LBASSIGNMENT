/* 
   Algorithm:
   START
      Accept starting number and ending number from the user
      If starting number or ending number is negative
         Display "Invalid Range" and stop
      If starting number is greater than ending number
         Display "Invalid Range" and stop
      Otherwise
         From start to end, check each number
         If the number is even
            Add it to the sum
      Return the total sum of even numbers
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
//  Function Name : RangeSumEven
//  Description   : Calculates sum of all even numbers in the given range
//  Input         : Integer (Start), Integer (End)
//  Output        : Integer (Sum) or -1 for invalid range
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int RangeSumEven(int iNo1, int iNo2)
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

    // Check if start > end
    if (iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return -1;
    }

    // Calculate sum of even numbers in the range
    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if ((iCnt % 2) == 0)   // Even number check
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;   // Return final sum
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

    iRet = RangeSumEven(iValue1, iValue2);   // Function call

    if (iRet != -1)
    {
        printf("%d is sum of even numbers in the range\n", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : Start = 4, End = 10
//  Output : 4 6 8 10 → Sum = 28
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
