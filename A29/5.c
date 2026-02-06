
////////////////////////////////////////////////////////////
//
//  File name :     29.5.c
//  Description :   This program displays numbers in a pattern
//                  where each row starts from the row number
//                  and prints consecutive numbers up to the
//                  number of columns entered by the user.
//
//  Author :        Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    Example:
    INPUT  : iRow = 4,  iCol = 4

    OUTPUT :
                1       2       3       4
                2       3       4       5
                3       4       5       6
                4       5       6       7
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
//  Description :    Prints consecutive numbers starting from
//                   the row number. Each row prints iCol values.
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

    if (iRow <= 0 || iCol <= 0)
    {
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = i; j < i + iCol; j++)
        {
            printf("%d\t", j);
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
//          1   2   3   4
//
//  ---------------------------------------------
//
//  Input : 2 4
//  Output :
//          1   2   3   4
//          2   3   4   5
//
//  ---------------------------------------------
//
//  Input : 4 5
//  Output :
//          1   2   3   4   5
//          2   3   4   5   6
//          3   4   5   6   7
//          4   5   6   7   8
//
//  ---------------------------------------------
//
//  Input : 0 5 or -3 4
//  Output :
//          (No output)
//
////////////////////////////////////////////////////////////
