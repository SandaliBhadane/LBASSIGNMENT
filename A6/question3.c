/*
   Algorithm
   START
      Accept two numbers from user
      If both numbers are equal
         Display "Equal"
      Else
         Display "Not Equal"
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description   : Checks whether two numbers are equal
//  Input         : Integer (iNo1, iNo2)
//  Output        : Boolean (true / false)
//  Author        : Sandali Sunil Bhadane
//  Date          : 24/10/2025
//
///////////////////////////////////////////////////////////////////
bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;     // Numbers are equal
    }
    else
    {
        return false;    // Numbers are not equal
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;   // Variables for input numbers
    bool bRet = false;              // Variable to store function result

    printf("Please enter two numbers: ");
    scanf("%d%d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output
//
//  Input  : 10 10
//  Output : Equal
//
//  Input  : 5 12
//  Output : Not Equal
//
///////////////////////////////////////////////////////////////////
