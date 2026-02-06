////////////////////////////////////////////////////////////
//
//  File name :     question2.c

//  Description :   This program displays alphabets from A/a
//                  up to the number of columns entered by
//                  the user. Odd rows show uppercase
//                  alphabets and even rows show lowercase.
//  Author :        Pallavi Sable
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    Example:
    INPUT  : iRow = 4,  iCol = 4

    OUTPUT :
                A   B   C   D
                a   b   c   d
                A   B   C   D
                a   b   c   d
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    Prints uppercase alphabets on odd rows
//                   and lowercase alphabets on even rows.
//  Input :          Integer (iRow), Integer (iCol)
//  Output :         Void
//  Author :         Pallavi Sable
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", 'A' + j);
            }
            else
            {
                printf("%c\t", 'a' + j);
            }
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns :\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
// End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
////////////////////////////////////////////////////////////
//
//  Input : iRow = 1, iCol = 1
//  Output :
//           A
//
//  ---------------------------------------------
//
//  Input : iRow = 1, iCol = 5
//  Output :
//           A   B   C   D   E
//
//  ---------------------------------------------
//
//  Input : iRow = 3, iCol = 4
//  Output :
//           A   B   C   D
//           a   b   c   d
//           A   B   C   D
//
//  ---------------------------------------------
//
//  Input : iRow = 4, iCol = 2
//  Output :
//           A   B
//           a   b
//           A   B
//           a   b
//
//  ---------------------------------------------
//
//  Input : iRow = 0, iCol = 5
//  Output :
//           (No output)
//
//  ---------------------------------------------
//
//  Input : iRow = -3, iCol = 4
//  Output :
//           (No output)
//
////////////////////////////////////////////////////////////