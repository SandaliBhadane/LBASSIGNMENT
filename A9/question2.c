/*
   Algorithm:
   START
      Accept USD amount from the user
      Convert USD to INR using the rate 1 USD = 70 INR
      Return the INR value
      Display the converted amount
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
//  Function Name : USDtoINR
//  Description   : Converts US Dollars to Indian Rupees
//  Input         : Integer (USD)
//  Output        : Integer (INR value)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int USDtoINR(int iNo)
{
    int iINR = 0;

    // Conversion formula: 1 USD = 70 INR
    iINR = 70 * iNo;

    return iINR;  
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter USD:\n");
    scanf("%d", &iValue);

    iRet = USDtoINR(iValue);

    printf("%d Dollars is %d INR", iValue, iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : 5 Dollars is 350 INR
//
///////////////////////////////////////////////////////////////////
