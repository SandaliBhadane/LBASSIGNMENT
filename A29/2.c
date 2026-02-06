////////////////////////////////////////////////////////////
//
//  File name :     29.2.c
//  Description :   This program displays even numbers on 
//                  odd rows and odd numbers on even rows.
//                  Numbers are printed up to the number of 
//                  columns entered by the user.
//  Author :        Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    Example:
    INPUT  : iRow = 4,  iCol = 5

    OUTPUT :
                2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
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
//  Description :    Prints even numbers on odd rows and
//                   odd numbers on even rows.
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
        if (i % 2 != 0)       
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", 2 * j);
            }
        }
        else                 
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", (2 * j) - 1);
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
//  Input : 1 5
//  Output :
//          2   4   6   8   10
//
//  ---------------------------------------------
//
//  Input : 2 4
//  Output :
//          2   4   6   8
//          1   3   5   7
//
//  ---------------------------------------------
//
//  Input : 4 5
//  Output :
//          2   4   6   8   10
//          1   3   5   7   9
//          2   4   6   8   10
//          1   3   5   7   9
//
//  ---------------------------------------------
//
//  Input : 0 5 or -3 4
//  Output :
//          (No output)
//
////////////////////////////////////////////////////////////