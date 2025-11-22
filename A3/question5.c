/*
   Algorithm
   START
      Accept a character from the user
      Convert the character to lowercase for uniform comparison
      Check if it is 'a', 'e', 'i', 'o', or 'u'
         If yes, it is a vowel
         Otherwise, it is not a vowel
      Display the result
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description   : Used to check whether a given character is a vowel or not
//  Input         : Character
//  Output        : Integer (1 for vowel, 0 for not vowel)
//  Author        : Sandali Sunil Bhadane
//  Date          : 20/10/2025
//
///////////////////////////////////////////////////////////////////
int CheckVowel(char cCheck)
{
    cCheck = tolower(cCheck);                     // Convert to lowercase

    if(cCheck == 'a' || cCheck == 'e' || 
       cCheck == 'i' || cCheck == 'o' || cCheck == 'u')  // Check vowels
    {
        return 1;                                 // It is a vowel
    }
    else
    {
        return 0;                                 // Not a vowel
    }
}
// End of CheckVowel()

///////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
///////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';                           // To accept user input

    printf("Enter a Character: ");
    scanf("%c", &cValue);

    if(CheckVowel(cValue))                        // Function call
    {
        printf("%c is Vowel\n", cValue);
    }
    else
    {
        printf("%c is Not Vowel\n", cValue);
    }

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : A   Output : A is Vowel
//  Input : e   Output : e is Vowel
//  Input : K   Output : K is Not Vowel
//  Input : u   Output : u is Vowel
//  Input : x   Output : x is Not Vowel
//
//
///////////////////////////////////////////////////////////////////
