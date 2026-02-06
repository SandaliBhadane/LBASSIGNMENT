////////////////////////////////////////////////////////////
//
//  File name :     29.1.c
//  Description :   This program displays consecutive numbers 
//                  row-wise. Each row contains iCol numbers,
//                  and numbering continues in the next row.
//
//  Author :        Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT  : iRow = 3,  iCol = 5

    OUTPUT :
                1   2   3   4   
                5   6   7   8
                9   1   2   3
                4   5   6   7
                  
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
//  Description :    Displays numbers from 1 to (iRow * iCol)
//                   in a matrix format.
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
    int iNo = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        return;
    }

    iNo = 1;

    for (i = 1; i <= iRow; i++)
    {
        
        
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo++;
            if((iNo > 9))
            {
                iNo = 1;
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

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
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

//  Input : iRow = 1, iCol = 1
//  Output :
//           1
//
//  ---------------------------------------------
//
//  Input : iRow = 1, iCol = 5
//  Output :
//           1   2   3   4   5
//
//  ---------------------------------------------
//
//  Input : iRow = 3, iCol = 4
//  Output :
//           1   2   3   4
//           5   6   7   8
//           9   10  11  12
//
//  ---------------------------------------------
//
//  Input : iRow = 4, iCol = 2
//  Output :
//           1   2
//           3   4
//           5   6
//           7   8
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