///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisible
//  Input         : Integer
//  Output        : Boolean
//  Description   : Checks whether the number is divisible by 5
//  Author       : Sandali Sunil Bhadane 
//  Date         : 30/10/2025
///////////////////////////////////////////////////////////////////
bool CheckDivisible(int iNo)
{
    // If number is zero or negative, consider it invalid
    if(iNo <= 0)
    {
        return false;
    }

    // Check divisibility directly (no loop needed)
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter Your Number\n");
    scanf("%d",&iValue1);

    bRet = CheckDivisible(iValue1);

    if(bRet == true)
    {
        printf("It is Divisible by 5");
    }
    else
    {
        printf("It is not Divisible by 5");
    }

    return 0;
}
