/*
   Algorithm:
   START
      Accept distance in kilometers from the user
      Convert kilometers to meters using formula: meters = km * 1000
      Return the converted distance
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
//  Function Name : DistanceKMtoMeters
//  Description   : Converts distance from kilometers to meters
//  Input         : Integer (Kilometers)
//  Output        : Integer (Meters)
//  Author        : Sandali Sunil Bhadane
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////////
int DistanceKMtoMeters(int iNo)
{
   int iMeters = 0;

   // Conversion formula: 1 km = 1000 meters
   iMeters = iNo * 1000;

   return iMeters;   // Return meters
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Distance in km:\n");
   scanf("%d", &iValue);

   iRet = DistanceKMtoMeters(iValue);

   printf("%d Kilometers is %d meters", iValue, iRet);

   return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : 5 Kilometers is 5000 meters
//
///////////////////////////////////////////////////////////////////
