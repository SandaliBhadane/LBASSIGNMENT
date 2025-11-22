/* 
   Algorithm:
   START
      Accept starting number and ending number from the user
      If starting number is greater than ending number
         Display "Invalid Range" and stop
      Otherwise
         Display numbers from end to start in reverse order
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
//  Function Name : RangeDisplayRev
//  Description   : Displays numbers in reverse order from end to start
//  Input         : Integer (Start), Integer (End)
//  Output        : None (Prints numbers)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;

    // Check if range is invalid
    if (iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return;
    }

    // Display numbers from end to start
    for (iCnt = iNo2; iCnt >= iNo1; iCnt--)
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

    RangeDisplayRev(iValue1, iValue2);   // Function call

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : Start = 3, End = 8
//  Output : 8 7 6 5 4 3
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
