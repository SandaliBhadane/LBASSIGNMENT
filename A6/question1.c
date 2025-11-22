/*
   Algorithm
   START
      Accept full name from user (including spaces)
      Display the entered name
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
//  Entry Point Function
//  Description : Accept and display full name using scanf()
//  Author      : Sandali Sunil Bhadane
//  Date        : 21/10/2025
//
///////////////////////////////////////////////////////////////////
int main()
{
    char Name[30];    // Character array to store full name

    printf("Please enter full name\t: ");
    
    // %[^\n] tells scanf to read input until user presses Enter (includes spaces)
    scanf("%[^\n]", Name);

    printf("Your Name is\t : %s", Name);

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Example Output
//
//  Input  : Sandali Sunil Bhadane
//  Output : Your Name is : Sandali Sunil Bhadane
//
///////////////////////////////////////////////////////////////////
