///////////////////////////////////////////////////////////////////
//
//  Description  : Accepts a number from user and displays its table
//  Input        : Integer (iNo)
//  Output       : Multiplication table of the number
//  Author       : Sandali Sunil Bhadane
//  Date         : 29/10/2025
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description   : Displays multiplication table of the given number
//  Input         : Integer
//  Output        : Prints table on console
//
///////////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to display multiplication table
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
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

    printf("Enter Number:\t");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : 5   10   15   20   25   30   35   40   45   50
//
///////////////////////////////////////////////////////////////////
