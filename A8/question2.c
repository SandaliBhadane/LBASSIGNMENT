/*
   Algorithm:
   START
      Accept a number from the user
      Use switch-case to check the number:
         If 0 -> Print "Zero"
         If 1 -> Print "One"
         If 2 -> Print "Two"
         If 3 -> Print "Three"
         If 4 -> Print "Four"
         If 5 -> Print "Five"
         If 6 -> Print "Six"
         If 7 -> Print "Seven"
         If 8 -> Print "Eight"
         If 9 -> Print "Nine"
         Else -> Print "Invalid Input"
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
//  Function Name : Display
//  Description   : Displays the word form of a single-digit number
//  Input         : Integer (iNo)
//  Output        : Word representation printed on screen
//  Author        : Sandali Sunil Bhadane
//  Date          : 29/10/2025
//
///////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    // Switch-case used to print number in words
    switch(iNo)
    {
        case 0: printf("Zero"); break;
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
        default: printf("Invalid Input");
    }
}

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number:\t");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 4
//  Output : Four
//
//  Input  : 9
//  Output : Nine
//
//  Input  : 12
//  Output : Invalid Input
//
///////////////////////////////////////////////////////////////////
