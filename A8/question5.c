/* 
   Algorithm:
   START
      Accept a number from the user
      If the number is negative, convert it to positive
      Display the multiplication table of the number
      Table should be printed from 10 down to 1
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
//  Function Name : DisplayTable
//  Description   : Displays reverse multiplication table of a number
//  Input         : Integer
//  Output        : Prints the table from (iNo * 10) to (iNo * 1)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
void DisplayTable(int iNo)
{ 
    int iCnt = 0;
    int iMult = 1;

    // Convert negative number to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Your Table is:\n");

    // Loop starts from 10 down to 1
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMult = iCnt * iNo;   // Calculate multiplication
        printf("%d\n", iMult); // Print result
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

    printf("Enter Your Number:\n");
    scanf("%d", &iValue1);

    DisplayTable(iValue1);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output :
//           50
//           45
//           40
//           35
//           30
//           25
//           20
//           15
//           10
//           5
//
///////////////////////////////////////////////////////////////////
