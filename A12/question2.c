/* 
   Algorithm:
   START
      Accept a number from the user
      If number is less than or equal to 0
         Stop and return -1
      Otherwise
         From 1 to number/2
            If current number divides the input number evenly
               Increase factor count
      Return total count of factors
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
//  Function Name : Count_Factor
//  Description   : Counts total number of factors of a given number
//  Input         : Integer (Number)
//  Output        : Integer (Count of factors)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int Count_Factor(int iNo)
{
    // Negative or zero check
    if (iNo <= 0)
    {
        return -1;
    }

    int iCnt = 0;
    int iCount = 0;

    // Count factors from 1 to iNo/2
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt) == 0)    // Factor check
        {
            iCount++;
        }
    }

    return iCount;   // Return number of factors
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

    iRet = Count_Factor(iValue);   // Function call

    if (iRet != -1)
    {
        printf("Number of factors is %d", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 24
//  Output : Number of factors is 7
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
