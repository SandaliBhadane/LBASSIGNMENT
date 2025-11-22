/*
   Algorithm:
   START
      Accept total marks and obtained marks from user
      If total or obtained marks are 0
         Return 0
      Else
         Calculate percentage = (obtained / total) * 100
         Display the result
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header File
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description   : Calculates percentage based on total and obtained marks
//  Input         : float, float
//  Output        : float (percentage)
//  Author        : Sandali Sunil Bhadane
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////////
float Percentage(float fTotal, float fObtained)
{
    float fPrcnt = 0.0;

    // If total or obtained marks are 0, return 0
    if (fTotal == 0 || fObtained == 0)
    {
        return 0;
    }

    // Calculate percentage
    fPrcnt = (fObtained / fTotal) * 100;

    return fPrcnt;
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    float fTotal = 0.0, fObtained = 0.0;  // Input variables
    float fRet = 0.0;                     // To store percentage result

    printf("Please enter total marks: ");
    scanf("%f", &fTotal);

    printf("Please enter obtained marks: ");
    scanf("%f", &fObtained);

    fRet = Percentage(fTotal, fObtained);

    // %.2f used to display 2 digits after decimal point
    printf("Total Percentage is: %.2f%%", fRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output
//
//  Input  : Total = 500, Obtained = 425
//  Output : Total Percentage is: 85.00%
//
//  Input  : Total = 0, Obtained = 300
//  Output : Total Percentage is: 0.00%
//
///////////////////////////////////////////////////////////////////
