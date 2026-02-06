////////////////////////////////////////////////////////////
//
//  File name :     30.1.c
//  Description :   To demonstrate pattern printing where
//                  '*' is printed on and below the diagonal,
//                  and '#' is printed above the diagonal.
//  Author :        Sandali Sunil Bhadane
//  Date :          22/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT:
        Rows = 4
        Columns = 4

    OUTPUT:
            *       #       #       #
            *       *       #       #
            *       *       *       #
            *       *       *       *
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Prints '*' for i >= j and '#' otherwise.
//                  Valid only when rows = columns.
//  Input :         Integer (iRow), Integer (iCol)
//  Output :        Void
//  Author :        Sandali Sunil Bhadane
//  Date :          22/11/2025
//
////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        printf("INVALID INPUT\n");
        printf("ROWS AND COLUMNS MUST BE POSITIVE\n");
        return;
    }

    if (iRow != iCol)
    {
        printf("INVALID INPUT\n");
        printf("NUMBER OF ROWS AND COLUMNS SHOULD BE SAME\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i >= j)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases
//
////////////////////////////////////////////////////////////
//
//  Input:
//      4 4
//  Output:
//      *   #   #   #
//      *   *   #   #
//      *   *   *   #
//      *   *   *   *
//
// ------------------------------------------
//
//  Input:
//      3 3
//  Output:
//      *   #   #
//      *   *   #
//      *   *   *
//
// ------------------------------------------
//
//  Input:
//      4 5
//  Output:
//      INVALID INPUT
//      NUMBER OF ROWS AND COLUMNS SHOULD BE SAME
//
// ------------------------------------------
//
//  Input:
//      0 4  or -3 3
//  Output:
//      INVALID INPUT
//      ROWS AND COLUMNS MUST BE POSITIVE
//
////////////////////////////////////////////////////////////