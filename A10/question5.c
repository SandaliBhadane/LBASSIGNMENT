/* 
   Algorithm:
   START
      Accept area in Square Feet from the user
      Convert Square Feet to Square Meters using formula:
         Square Meters = Square Feet * 0.0929
      Return the converted Square Meter value
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
//  Function Name : SquareMeters
//  Description   : Converts area from Square Feet to Square Meters
//  Input         : Integer (Square Feet)
//  Output        : Double  (Square Meters)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
double SquareMeters(int iNo)
{
   double dSquareMeters = 0.0;

   // Formula: Square Meters = Square Feet * 0.0929
   dSquareMeters = iNo * 0.0929;

   return dSquareMeters;    // Return converted area
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
   int iValue = 0;          
   double dRet = 0.0;

   printf("Enter Area in Square Feet:\n");
   scanf("%d", &iValue);

   dRet = SquareMeters(iValue);   // Function call

   printf("%d SquareFeet is %lf SquareMeters", iValue, dRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 100
//  Output : 100 SquareFeet is 9.290000 SquareMeters
//
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////////////
