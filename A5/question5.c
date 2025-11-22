/*
   Algorithm
   START
      Accept three numbers from user
      If first number is greater than both second and third
         Display first number as largest
      Else if second number is greater than both first and third
         Display second number as largest
      Else
         Display third number as largest
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description   : Used to find the largest among three numbers
//  Input         : Integer, Integer, Integer
//  Output        : Integer (Largest number)
//  Author        : Sandali Sunil Bhadane
//  Date          : 21/10/2025
//
///////////////////////////////////////////////////////////////////
int FindLargest(int x, int y, int z)
{
    if (x > y && x > z)                 // If first number is greatest
    {
        return x;
    }
    else if (y > x && y > z)            // If second number is greatest
    {
        return y;
    }
    else                                // Otherwise, third number is greatest
    {
        return z;
    }
}
// End of FindLargest()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int a = 0, b = 0, c = 0;            // To accept three numbers
    int result = 0;                     // To store the largest number

    printf("Enter three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);      // Function call

    printf("Largest number is: %d\n", result);

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 10 20 30  -> Output : 30
//  Input : 45 12 33  -> Output : 45
//  Input : 7 7 7     -> Output : 7
//  Input : -5 0 4    -> Output : 4
//
///////////////////////////////////////////////////////////////////
