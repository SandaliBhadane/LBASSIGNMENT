/*
   Algorithm
   START
      Accept a year from user
      If year is divisible by 400
         Then it is a Leap Year
      Else if year is divisible by 100
         Then it is NOT a Leap Year
      Else if year is divisible by 4
         Then it is a Leap Year
      Else
         It is NOT a Leap Year
      Display the result
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
//  Function Name : CheckLeapYear
//  Description   : Used to check whether the entered year is a leap year or not
//  Input         : Integer (Year)
//  Output        : Prints whether the year is Leap Year or Not
//  Author        : Sandali Sunil Bhadane
//  Date          : 21/10/2025
//
///////////////////////////////////////////////////////////////////
void CheckLeapYear(int year)
{
    if(year % 400 == 0)                      // Divisible by 400 -> Leap Year
    {
        printf("%d is a Leap Year.", year);
    }
    else if(year % 100 == 0)                 // Divisible by 100 -> Not Leap Year
    {
        printf("%d is Not a Leap Year.", year);
    }
    else if(year % 4 == 0)                   // Divisible by 4 -> Leap Year
    {
        printf("%d is a Leap Year.", year);
    }
    else                                     // All other years -> Not Leap Year
    {
        printf("%d is Not a Leap Year.", year);
    }
}
// End of CheckLeapYear()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int yr = 0;                              // To accept year input

    printf("Enter Year: ");
    scanf("%d", &yr);

    CheckLeapYear(yr);                       // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 2000  -> Output : 2000 is a Leap Year.
//  Input : 1900  -> Output : 1900 is Not a Leap Year.
//  Input : 2024  -> Output : 2024 is a Leap Year.
//  Input : 2023  -> Output : 2023 is Not a Leap Year.
//
///////////////////////////////////////////////////////////////////
