
////////////////////////////////////////////////////////////
//
//  File name :     29.3.c
//  Description :   This program displays alphabets on odd
//                  rows and numbers on even rows. The 
//                  number of elements printed in each row 
//                  depends on the number of columns entered 
//                  by the user.
//  Author :        Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    Example:
    INPUT  : iRow = 4,  iCol = 5

    OUTPUT :
                a       b       c       d       e
                1       2       3       4       5
                a       b       c       d       e
                1       2       3       4       5
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
//  Description :    Prints alphabets on odd rows and
//                   numbers on even rows.
//  Input :          Integer (iRow), Integer (iCol)
//  Output :         Void
//  Author :         Sandali Sunil Bhadane
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    if (iRow <= 0 || iCol <= 0)
    {
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        if (i % 2 != 0)       
        {
            for (j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                printf("%c\t", ch);
            }
        }
        else                 
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
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
//  Test cases
//
////////////////////////////////////////////////////////////
//
//  Input : 1 4
//  Output :
//          a   b   c   d
//
//  ---------------------------------------------
//
//  Input : 2 4
//  Output :
//          a   b   c   d
//          1   2   3   4
//
//  ---------------------------------------------
//
//  Input : 4 5
//  Output :
//          a   b   c   d   e
//          1   2   3   4   5
//          a   b   c   d   e
//          1   2   3   4   5
//
//  ---------------------------------------------
//
//  Input : 0 5 or -3 4
//  Output :
//          (No output)
//
////////////////////////////////////////////////////////////
