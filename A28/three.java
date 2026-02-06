////////////////////////////////////////////////////////////
//
//  File name :     three.java
//  Description :   This program displays alphabets from A
//                  for the number of rows entered by the
//                  user. Each row contains the same
//                  alphabet repeated across all columns.
//                  
//  Author :        Sandali Sunil Bhadane
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
    ////////////////////////////////////////////////////////////
    //
    //  Function Name :  Display
    //  Description :    Prints alphabets starting from 'A'
    //                   row-wise, repeating the same alphabet
    //                   iCol times in each row.
    //  Input :          Integer (iRow), Integer (iCol)
    //  Output :         Void
    //  Author :         Sandali Sunil Bhadane
    //  Date :           21/11/2025
    //
    ////////////////////////////////////////////////////////////
    void Display(int iRow, int iCol)
    {
        int  i = 0;
        int  j = 0;
        if (iRow <= 0 || iCol <= 0)
        {
            return;
        }

        for (i = 1; i <= iRow; i++)
        {
            for (j = 1; j <= iCol; j++)
            {
                System.out.print((char)('A' + (i - 1)) + "\t");
            }
            System.out.println();
        }
    }
}


class three
{
    ////////////////////////////////////////////////////////////
    //
    //  Entry Point Function for the Application
    //
    ////////////////////////////////////////////////////////////
    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the number of Rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

        sobj.close();
    }
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