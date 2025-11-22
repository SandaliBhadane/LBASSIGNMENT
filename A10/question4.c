/*
   Algorithm:
   START
      Accept temperature in Fahrenheit from the user
      Convert Fahrenheit to Celsius using formula:
         Celsius = (Fahrenheit - 32) * (5/9)
      Return the Celsius value
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
//  Function Name : FhtoCs
//  Description   : Converts temperature from Fahrenheit to Celsius
//  Input         : Float (Fahrenheit)
//  Output        : Double (Celsius)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
   float fCelsius = 0.0f;

   // Formula: (F - 32) * (5/9)
   fCelsius = ( (fTemp - 32) * (5.0 / 9.0) );

   return fCelsius;   // Return Celsius temperature
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
   float fValue = 0.0f;
   double dRet = 0.0f;

   printf("Enter Temperature in Fahrenheit:\n");
   scanf("%f", &fValue);

   dRet = FhtoCs(fValue);   // Function call

   printf("%f Fahrenheit is %f Celsius", fValue, dRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 98.6
//  Output : 98.600000 Fahrenheit is 37.000000 Celsius
//
///////////////////////////////////////////////////////////////////
