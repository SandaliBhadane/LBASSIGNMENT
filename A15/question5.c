///////////////////////////////////////////////////////////////////
//
//  Algorithm
//
//  START
//      Accept number from user
//      If number is negative, convert to positive
//      Initialise sum of even digits as 0
//      Initialise sum of odd digits as 0
//      Extract digit using % 10
//      If digit is even
//          Add to even sum
//      Else
//          Add to odd sum
//      Divide number by 10 to remove last digit
//      Repeat till number becomes 0
//      Return (sum of even digits - sum of odd digits)
//  STOP
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : SumDiff
//  Description   : Used to return difference between sum of even 
//                  digits and sum of odd digits
//  Input         : Integer
//  Output        : Integer
//
///////////////////////////////////////////////////////////////////
int SumDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;    // Sum of even digits
    int iSum2 = 0;    // Sum of odd digits

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;   // Add even digit
        }
        else
        {
            iSum2 = iSum2 + iDigit;   // Add odd digit
        }

        iNo = iNo / 10;      // Remove last digit
    }

    return (iSum1 - iSum2);
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
    scanf("%d",&iValue);

    iRet = SumDiff(iValue);

    printf("Sum of even digits - Sum of odd digits is %d",iRet);

    return 0;
}

