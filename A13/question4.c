/*
   Algorithm:
   START
      Accept a limit number from the user
      If limit is less than or equal to 0
         Return 0
      Initialize sum to 0
      Use loop from 1 to limit
         Add each number to sum
      Return the final sum
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
//  Description   : Calculates sum of numbers from 1 to given limit
//  Input         : Integer (Limit)
//  Output        : Integer (Sum)
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
        return 0;    // Return 0 for invalid input
    }

    // Loop to calculate sum
    for(iCnt = 1 ; iCnt <= ilimit ; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;     // Return total sum
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

    printf("Sum of Numbers is %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : Sum of Numbers is 15
//
///////////////////////////////////////////////////////////////////
