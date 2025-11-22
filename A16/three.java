/*
   Algorithm:
   START
      Accept a number from the user
      Initialize factorial as 1
      Run loop from 1 to the number
         Multiply factorial with loop counter each time
      Return the final factorial value
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Class Name      : Logic
//  Function Name   : CalculateFactorial
//  Description     : Calculates factorial of a given number
//  Input           : Integer (iNo)
//  Output          : Integer (Factorial value)
//  Author          : Sandali Sunil Bhadane
//  Date            : 21/11/2025
//
///////////////////////////////////////////////////////////////////
class Logic
{
    int CalculateFactorial(int iNo)
    {
        int iFact = 1;   // Stores factorial value

        // Loop from 1 to iNo
        for (int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;   // Multiply each number
        }
        return iFact;   // Return final factorial value
    }
}

///////////////////////////////////////////////////////////////////
//
//  Class Name      : three
//  Description     : Entry point of the program
//
///////////////////////////////////////////////////////////////////
class three
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();   // Create object of Logic class
    
        int iRet = lobj.CalculateFactorial(5);   // Function call

        System.out.println("Factorial is: " + iRet);   // Display result
    }
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 5
//  Output : Factorial is: 120
//
///////////////////////////////////////////////////////////////////
