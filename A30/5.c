////////////////////////////////////////////////////////////
//
//  File name :     program30.5.c
//  Description :   To demonstrate hollow box pattern where
//                  numbers are printed on the border and
//                  '*' is printed inside the box.
//  Author :        sandali Sunil Bhadane
//  Date :          22/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT:
        Rows = 6
        Columns = 6

    OUTPUT:
            1       2       3       4       5       6
            1       *       *       *       *       6
            1       *       *       *       *       6
            1       *       *       *       *       6
            1       *       *       *       *       6
            1       2       3       4       5       6
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
//  Description :   Prints numbers on the border and
//                  '*' inside the pattern.
//  Input :         int iRow, int iCol
//  Output :        Void
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

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t", j);      
            }
            else
            {
                printf("*\t");         
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
//      6 6
//  Output:
//      1   2   3   4   5   6
//      1   *   *   *   *   6
//      1   *   *   *   *   6
//      1   *   *   *   *   6
//      1   *   *   *   *   6
//      1   2   3   4   5   6
//
// ------------------------------------------
//
//  Input:
//      4 5
//  Output:
//      1   2   3   4   5
//      1   *   *   *   5
//      1   *   *   *   5
//      1   2   3   4   5
//
// ------------------------------------------
//
//  Input:
//      0 5  or  -5 5
//  Output:
//      INVALID INPUT
//      ROWS AND COLUMNS MUST BE POSITIVE
//
////////////////////////////////////////////////////////////