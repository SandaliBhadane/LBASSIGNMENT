/*
   Algorithm:
   START
      Accept radius from the user
      Calculate area using formula: Area = 3.14 * radius * radius
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
//  Function Name : Area
//  Description   : Calculates area of a circle using radius
//  Input         : Float (Radius)
//  Output        : Float (Area of circle)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
float Area(float Rad)
{
   float fAns = 0.0f;

   // Formula: π * r * r
   fAns = 3.14f * Rad * Rad;
   
   return fAns;   // Return area
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
   float fValue = 0.0f;
   float dRet = 0.0f;

   printf("Enter Radius:\n");
   scanf("%f", &fValue);

   dRet = Area(fValue);

   printf("Area of circle is : %f", dRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : Area of circle is : 78.500000
//
//
///////////////////////////////////////////////////////////////////
