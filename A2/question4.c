/* 
   Algorithm
   START
      Accept a number and its frequency from the user
      If the number is negative, convert it to positive
      If the frequency is negative, convert it to positive
      Use a loop to display the number 'frequency' times
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
//  Function Name : Display
//  Description   : It is used to display a number multiple times based on given frequency
//  Input         : Integer (Number), Integer (Frequency)
//  Output        : None
//  Author        : Sandali Sunil Bhadane
//  Date          : 19/10/2025
//
///////////////////////////////////////////////////////////////////
int Display(int iNo, int iFrequency)
{
    int i = 0;                         // Loop counter

    if (iNo < 0)                       // Updator - handle negative number
    {
        iNo = -iNo;
    }
    if (iFrequency < 0)                // Updator - handle negative frequency
    {
        iFrequency = -iFrequency;
    }

    for(i = 0; i < iFrequency; i++)    // Loop runs iFrequency times
    {
        printf("%d ", iNo);
    }
}
// End of Display()

///////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application.
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                    // To accept number from user
    int iCount = 0;                    // To accept frequency from user

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);           // Function call

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 5   Frequency : 3   Output : 5 5 5
//  Input : 7   Frequency : 1   Output : 7
//  Input : -3  Frequency : 4   Output : 3 3 3 3
//  Input : 2   Frequency : 0   Output : (No Output)
//
//
///////////////////////////////////////////////////////////////////
