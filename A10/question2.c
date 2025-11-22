/*
   Algorithm:
   START
      Accept height and width of a rectangle from the user
      Calculate area using formula: Area = Height * Width
      Return the calculated area
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
//  Function Name : RecArea
//  Description   : Calculates area of a rectangle
//  Input         : Float (Height), Float (Width)
//  Output        : Float (Area of rectangle)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
float RecArea(float Height, float Width)
{
   float fArea = 0.0f;

   // Formula: Height * Width
   fArea = Height * Width;

   return fArea;   // Return rectangle area
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
   float fValue1 = 0.0f;   // Height
   float fValue2 = 0.0f;   // Width
   double dRet = 0.0f;

   printf("Enter Height of Rectangle:\n");
   scanf("%f", &fValue1);

   printf("Enter Width of Rectangle:\n");
   scanf("%f", &fValue2);

   dRet = RecArea(fValue1, fValue2);   // Function call

   printf("Area of Rectangle is : %lf", dRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input:
//     Height : 4
//     Width  : 5
//
//  Output : Area of Rectangle is : 20.000000
//
///////////////////////////////////////////////////////////////////

