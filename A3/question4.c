/*
   Algorithm
   START
      Accept a character from user
      If character is uppercase (A–Z)
         Convert it to lowercase by adding 32
      Else if character is lowercase (a–z)
         Convert it to uppercase by subtracting 32
      Display the converted character
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
//  Function Name : DisplayConvert
//  Description   : Used to convert uppercase character to lowercase 
//                  and lowercase character to uppercase
//  Input         : Character
//  Output        : None (Displays converted character on screen)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
int DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')      // Check for uppercase
    {
        printf("%c\n", cValue + 32);        // Convert to lowercase
    }
    else if(cValue >= 'a' && cValue <= 'z') // Check for lowercase
    {
        printf("%c\n", cValue - 32);        // Convert to uppercase
    }
}
// End of DisplayConvert()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';                     // To accept character input

    printf("Enter Character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);                 // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : A   Output : a
//  Input : z   Output : Z
//  Input : M   Output : m
//  Input : m   Output : M
//  Input : #   Output : (No output – not an alphabet)
//
//
///////////////////////////////////////////////////////////////////
