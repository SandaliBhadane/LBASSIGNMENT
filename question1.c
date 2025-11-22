/* 
   Algorithm
   START
      Accept first number as iNo1
      Accept second number as iNo2
      If iNo2 is zero, return -1 (Invalid Division)
      Otherwise, perform iNo1 / iNo2
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
//  Function Name : Divide
//  Description   : It is used to perform Division
//  Input         : Integer, Integer
//  Output        : Integer
//  Author        : Sandali Sunil Bhadane
//  Date          : 18/10/2025
//
///////////////////////////////////////////////////////////////////
int Divide(
            int iNo1,        // First Input 
            int iNo2         // Second Input
          )               
{
    int iAns = 0;

    if (iNo2 == 0)           // Updator - to handle divide by zero case
    {
        return -1;           // Return error code
    }

    iAns = iNo1 / iNo2;      // Business Logic
    return iAns;
}
// End of Divide()

///////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application.
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 15, iValue2 = 5;      // To Accept user Input
    int iRet = 0;                       // To Store the result

    iRet = Divide(iValue1, iValue2);    // Method call (Function call)

    printf("Division is: %d\n", iRet);

    return 0;
}
// End of Main

///////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input1 : 10    Input2 : 2    Output : 5
//  Input1 : 15    Input2 : 3    Output : 5
//  Input1 : 10    Input2 : 0    Output : -1 (Invalid Division)
//  Input1 : -20   Input2 : 4    Output : -5
//
///////////////////////////////////////////////////////////////////
