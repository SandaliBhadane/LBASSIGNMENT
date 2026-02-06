////////////////////////////////////////////////////////////
//
//  File name :     Question1.c
//  Description :   This program displays alphabets from A
//                  for the number of columns entered by the
//                  user, repeated for each row.
//                  Example: A B C D for iCol = 4
//  Author :        Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/* 
    INPUT  : iRow = 4,  iCol = 4

    OUTPUT : 
                A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D  
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    Displays alphabets starting from 'A' up
//                   to iCol columns, repeated for iRow rows.
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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%c\t", 'A' + j);
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
//           A   B   C   D
//           A   B   C   D
//
//  ---------------------------------------------
//
//  Input : iRow = 4, iCol = 2
//  Output : 
//           A   B
//           A   B
//           A   B
//           A   B
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
//
////////////////////////////////////////////////////////////