/* 
   Algorithm:
   START
      Accept starting number and ending number from the user
      If starting number is greater than ending number
         Display "Invalid Range"
      Otherwise
         Display all numbers between start and end (inclusive)
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
//  Function Name : RangeDisplay
//  Description   : Displays all numbers from start to end
//  Input         : Integer (Start), Integer (End)
//  Output        : None (Prints numbers)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;

    // Check for invalid range
    if (iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return;             // Stop execution if range is invalid
    }

    // Display numbers from iNo1 to iNo2
    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t", iCnt);
    }
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

    printf("Enter your starting number:\n");
    scanf("%d", &iValue1);

    printf("Enter your ending number:\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);   // Function call

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : Start = 5, End = 10
//  Output : 5  6  7  8  9  10
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
