/*
   Algorithm
   START
      Accept a number from user
      If number > 100
         Display "Greater"
      Else
         Display "Smaller"
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
//  Function Name : ChkGreater
//  Description   : Checks whether the given number is greater than 100
//  Input         : Integer (iNo)
//  Output        : Boolean (true / false)
//  Author        : Sandali Sunil Bhadane
//  Date          : 24/10/2025
//
///////////////////////////////////////////////////////////////////
bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;     // Number is greater than 100
    }
    else
    {
        return false;    // Number is 100 or smaller
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;     // Variable to store user input
    bool bRet = false;  // To store function result

    printf("Please enter number:\t");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output
//
//  Input  : 150
//  Output : Greater
//
//  Input  : 45
//  Output : Smaller
//
///////////////////////////////////////////////////////////////////
