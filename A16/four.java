/*
   Algorithm:
   START
      Accept a number from the user
      Initialize reverse = 0
      Repeat until number becomes 0
         Extract last digit using number % 10
         Add digit to reverse (reverse = reverse * 10 + digit)
         Remove last digit using number / 10
      Return reversed number
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Class Name      : Logic
//  Function Name   : ReverseNumber
//  Description     : Reverses the digits of the given number
//  Input           : Integer (iNo)
//  Output          : Integer (Reversed number)
//  Author          : Sandali Sunil Bhadane
//  Date            : 21/11/2025
//
///////////////////////////////////////////////////////////////////
class Logic
{
    int ReverseNumber(int iNo)
    {
        int iRev = 0, iDigit = 0;

        // Reverse logic
        while (iNo != 0)
        {
            iDigit = iNo % 10;              // Extract last digit
            iRev = (iRev * 10) + iDigit;    // Add digit to reversed number
            iNo = iNo / 10;                 // Remove last digit
        }

        return iRev;     // Return reversed number
    }
}

///////////////////////////////////////////////////////////////////
//
//  Class Name      : four
//  Description     : Entry point of the Java program
//
///////////////////////////////////////////////////////////////////
class four
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();           // Create object of Logic class
    
        int iRet = lobj.ReverseNumber(12345);   // Function call

        System.out.print("Reverse is: " + iRet); // Display result
    }
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 12345
//  Output : Reverse is: 54321
//
///////////////////////////////////////////////////////////////////
