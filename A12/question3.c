/* 
   Algorithm:
   START
      Accept a number from the user
      If number is less than or equal to 0
         Stop and return -1
      Otherwise
         From 1 to number/2
            If current number divides the input number evenly
               Add the number to sum
      Return the total sum of all factors
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
//  Function Name : Sum_Factor
//  Description   : Calculates the sum of all factors of the given number
//  Input         : Integer (Number)
//  Output        : Integer (Sum of factors)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int Sum_Factor(int iNo)
{
    // Negative or zero check
    if (iNo <= 0)
    {
        return -1;
    }

    int iCnt = 0;
    int iSum = 0;

    // Add all factors from 1 to iNo/2
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)   // Factor check
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;   // Return total sum
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

    printf("Enter your number:\n");
    scanf("%d", &iValue);

    iRet = Sum_Factor(iValue);   // Function call

    if (iRet != -1)
    {
        printf("Sum of factors is %d", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 12
//  Output : Sum of factors is 16
//           (1 + 2 + 3 + 4 + 6)
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
