/*
   Algorithm:
   START
      Accept a limit number from the user
      If limit is less than or equal to 0
         Return 0
      Initialize sum = 0
      Run loop from 1 to limit
         If current number is even
            Add it to sum
      Return the final sum of even numbers
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
//  Function Name : Sum_of_Numbers
//  Description   : Calculates sum of all even numbers up to the limit
//  Input         : Integer (Limit)
//  Output        : Integer (Sum of Even Numbers)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int Sum_of_Numbers(int ilimit)
{
    int iCnt = 0;
    int iSum = 0;

    if(ilimit <= 0)
    {
        return 0;      // Return 0 for invalid input
    }

    // Loop to add only even numbers
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++)
    {
        if((iCnt % 2) == 0)    // Check even number
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;       // Return final even sum
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iLimit = 0;
    int iRet = 0;

    printf("Enter Your Limit\n");
    scanf("%d",&iLimit);

    iRet = Sum_of_Numbers(iLimit);   // Function call

    printf("Sum of Even Numbers is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 10
//  Output : Sum of Even Numbers is 30
//
//  (Explanation: 2 + 4 + 6 + 8 + 10 = 30)
//
///////////////////////////////////////////////////////////////////
