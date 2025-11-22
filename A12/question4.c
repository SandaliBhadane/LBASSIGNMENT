///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Sum_Even_Factor
//  Description: Accept number from user and return sum 
//               of even factors of that number
//  Input         : Integer
//  Output        : Integer (Sum of even factors)
//  Author        :Sandali Sunil Bhadane 
//  Date          : 22/10/2025
//
///////////////////////////////////////////////////////
int Sum_Even_Factor(int iNo)
{
    // If number is zero or negative, return 0
    if(iNo <= 0)
    {
        return 0;
    }

    int iCnt = 0;
    int iSum = 0;

    // Loop till half of the number
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        // Check if iCnt is a factor
        if((iNo % iCnt) == 0)
        {
            // Check if factor is even
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
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

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iRet = Sum_Even_Factor(iValue);

    printf("Sum of Even factors is %d", iRet);

    return 0;
}
