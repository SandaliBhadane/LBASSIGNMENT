/*
   Algorithm:
   START
      Accept a number from the user
      Check if number is divisible by 2
         If divisible, number is EVEN
         Otherwise, number is ODD
      Display the result
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Class Name      : Logic
//  Function Name   : CheckEvenOdd
//  Description     : Checks whether the given number is Even or Odd
//  Input           : Integer (iNo)
//  Output          : Boolean (true for Even, false for Odd)
//  Author          : Sandali Sunil Bhadane
//  Date            : 30/10/2025
//
///////////////////////////////////////////////////////////////////
class Logic
{
    boolean CheckEvenOdd(int iNo)
    {
        // If number is divisible by 2, it is Even
        if (iNo % 2 == 0)
        {
            return true;   // Even
        }
        else
        {
            return false;  // Odd
        }
    }
}

///////////////////////////////////////////////////////////////////
//
//  Class Name      : two
//  Description     : Entry point of the Java program
//
///////////////////////////////////////////////////////////////////
class two
{
    public static void main(String A[])
    {
        boolean bRet = false;
        Logic lobj = new Logic();   // Create object of Logic class

        bRet = lobj.CheckEvenOdd(10);   // Function call

        // Display whether the number is Even or Odd
        if (bRet == true)
        {
            System.out.println("The Number is an Even Number");
        }
        else
        {
            System.out.println("The Number is an Odd Number");
        }
    }
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 10
//  Output : The Number is an Even Number
//
///////////////////////////////////////////////////////////////////
