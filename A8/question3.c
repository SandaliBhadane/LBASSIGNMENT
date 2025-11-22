///////////////////////////////////////////////////////////////////
//
//  Description  : Accepts a number from user and returns its factorial
//  Input        : Integer (iNo)
//  Output       : Integer (Factorial value)
//  Author       : Sandali Sunil Bhadane
//  Date         : 29/10/2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description   : Calculates factorial of a given number
//  Input         : Integer 
//  Output        : Integer
//
///////////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    // If number is negative, convert to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to calculate factorial
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\t");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is: %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : Factorial of number is: 120
//
//  Input  : -4
//  Output : Factorial of number is: 24
//
///////////////////////////////////////////////////////////////////
