///////////////////////////////////////////////////////////////////
//
//  Algorithm
//
//  START
//      Accept number from user
//      If number is negative, convert it to positive
//      Initialise multiplication as 1
//      Extract each digit using % 10
//      If digit is not zero
//          Multiply it with multiplication
//      Divide number by 10 to remove last digit
//      Repeat till number becomes 0
//      Return multiplication
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
//  Function Name : MultDigits
//  Description   : Used to return multiplication of digits of number
//  Input         : Integer
//  Output        : Integer
//
///////////////////////////////////////////////////////////////////
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMult = iMult * iDigit;     // Multiply only non-zero digits
        }

        iNo = iNo / 10;     // Remove last digit
    }

    return iMult;
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

    iRet = MultDigits(iValue);

    printf("Multiplication of digits is %d",iRet);

    return 0;
}
