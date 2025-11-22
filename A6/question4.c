/*
   Algorithm
   START
      Accept three numbers from user
      If any number is 0
         Return 0
      Else
         Multiply all three numbers
         Return the result
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
//  Function Name : Multiply
//  Description   : Performs multiplication of three numbers
//  Input         : Integer (iNo1, iNo2, iNo3)
//  Output        : Integer (Multiplication result)
//  Author        : Sandali Sunil Bhadane
//  Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;

    // If any input number is 0, result will be 0
    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        return 0;
    }

    // Multiplying all three numbers
    iResult = iNo1 * iNo2 * iNo3;

    return iResult;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;  // Input variables
    int iRet = 0;                               // To store result

    printf("Please enter three numbers: ");
    scanf("%d%d%d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is : %d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output
//
//  Input  : 2 3 4
//  Output : Multiplication is : 24
//
//  Input  : 0 5 7
//  Output : Multiplication is : 0
//
///////////////////////////////////////////////////////////////////
