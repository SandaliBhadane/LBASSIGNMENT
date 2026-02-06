
////////////////////////////////////////////////////////////
//
//  File name :     28.3.c
//  Description :   This program displays alphabets from A
//                  for the number of rows entered by the
//                  user. Each row contains the same
//                  alphabet repeated across all columns.
//                  
//  Author :        Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/* 
    INPUT  : iRow = 3,  iCol = 4

    OUTPUT : 
                A   A   A   A
                B   B   B   B
                C   C   C   C
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
//  Description :    Displays alphabets row-wise starting
//                   from 'A'. Each row prints the same
//                   character iCol times.
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
        for (j = 1; j <= iCol; j++)
        {
            printf("%c\t", 'A' + (i - 1));   
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
//           A   A   A   A   A
//
//  ---------------------------------------------
//
//  Input : iRow = 3, iCol = 4
//  Output : 
//           A   A   A   A
//           B   B   B   B
//           C   C   C   C
//
//  ---------------------------------------------
//
//  Input : iRow = 4, iCol = 2
//  Output : 
//           A   A
//           B   B
//           C   C
//           D   D
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
