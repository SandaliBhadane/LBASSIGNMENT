////////////////////////////////////////////////////////////
//
//  File name :     question4.c
//  Description :   This program displays numbers in
//                  decreasing order row-wise.
//                  Each row contains the same number 
//                  repeated across all columns.
//
//  Author :       Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/* 
    INPUT  : iRow = 4,  iCol = 5

    OUTPUT : 
                4   4   4   4   4
                3   3   3   3   3
                2   2   2   2   2
                1   1   1   1   1
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
//  Description :    Displays numbers from iRow down to 1,
//                   each printed iCol times in a row.
//  Input :          Integer (iRow), Integer (iCol)
//  Output :         Void
//  Author :        Sandali Sunil Bhadane
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

    for (i = iRow; i >= 1; i--)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);   
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
//           1
//
//  ---------------------------------------------
//
//  Input : iRow = 1, iCol = 5
//  Output : 
//           1   1   1   1   1
//
//  ---------------------------------------------
//
//  Input : iRow = 3, iCol = 4
//  Output : 
//           3   3   3   3
//           2   2   2   2
//           1   1   1   1
//
//  ---------------------------------------------
//
//  Input : iRow = 4, iCol = 2
//  Output : 
//           4   4
//           3   3
//           2   2
//           1   1
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
///////////////////////////////////////////////////////////