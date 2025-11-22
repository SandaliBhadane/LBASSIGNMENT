/*
   Algorithm:
   START
      Accept a number from the user
      If number < 50
         Display "Small"
      Else if number >= 50 and < 100
         Display "Medium"
      Else if number >= 100
         Display "Large"
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
//  Function Name : Number
//  Description   : Classifies the given number as Small, Medium, or Large
//  Input         : Integer
//  Output        : Text displayed on screen ("Small", "Medium", or "Large")
//  Author        : Sandali Sunil Bhadane
//  Date          : 29/10/2025
//
///////////////////////////////////////////////////////////////////
void Number(int iNo)
{
    // Check the range of the number and display category
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo >= 100)
    {
        printf("Large");
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number:\t");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 30
//  Output : Small
//
//  Input  : 75
//  Output : Medium
//
//  Input  : 120
//  Output : Large
//
///////////////////////////////////////////////////////////////////
