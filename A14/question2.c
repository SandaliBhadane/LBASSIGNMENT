/*
   Algorithm:
   START
      Accept a number from the user
      Extract each digit using:
         digit = number % 10
      If any digit is 0
         Return True
      Else continue checking next digits
      If loop ends and no zero found
         Return False
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckZero
//  Description   : Checks whether the number contains zero or not
//  Input         : Integer (Number)
//  Output        : Boolean (True / False)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
bool CheckZero(int iNo)
{
    int iDigit = 0;

    // Loop to extract digits
    while(iNo != 0)
    {
        iDigit = iNo % 10;     // Extract last digit

        if(iDigit == 0)        // Check if digit is zero
        {
            return True;       // Zero found
        }

        iNo = iNo / 10;        // Remove last digit
    }

    return False;              // Zero not found
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

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CheckZero(iValue);      // Function call

    if(iRet == True)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("It Does Not Contain Zero\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 1054
//  Output : It Contains Zero
//
///////////////////////////////////////////////////////////////////
