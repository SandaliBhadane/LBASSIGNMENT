/* 
   Algorithm:
   START
      Accept starting number and ending number from the user
      If starting number is greater than ending number
         Display "Invalid Range"
      Otherwise
         From start to end, check each number
         If the number is even
            Display the number
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
//  Function Name : RangeDisplayEven
//  Description   : Displays even numbers within the given range
//  Input         : Integer (Start), Integer (End)
//  Output        : None (Prints even numbers)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iNo1, int iNo2)
{
    int iCnt = 0;

    // Check for invalid range
    if (iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return;
    }

    // Display even numbers between iNo1 and iNo2
    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if ((iCnt % 2) == 0)   // Check even condition
        {
            printf("%d\t", iCnt);
        }
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

    RangeDisplayEven(iValue1, iValue2);   // Function call

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : Start = 4, End = 12
//  Output : 4  6  8  10  12
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
