/*
   Algorithm:
   START
      Accept a number from the user
      If number is negative, convert it to positive
      If number is 0, digit count is 1
      Otherwise:
         Repeat until number becomes 0
            Divide number by 10 to remove last digit
            Increase digit count
      Return total count of digits
   STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Class Name      : Logic
//  Function Name   : CountDigits
//  Description     : Counts the total number of digits in a number
//  Input           : Integer (iNo)
//  Output          : Integer (digit count)
//  Author          : Sandali Sunil Bhadane
//  Date            : 21/11/2025
//
///////////////////////////////////////////////////////////////////
class Logic
{
    int CountDigits(int iNo)
    {
        int iCnt = 0;

        // If number is negative, make it positive
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        // Special case: number 0 has 1 digit
        if (iNo == 0)
        {
            return 1;
        }

        // Loop to remove last digit each time
        while (iNo != 0)
        {
            iNo = iNo / 10;   // Remove last digit
            iCnt++;           // Increase digit count
        }

        return iCnt;   // Return total digits
    }
}

///////////////////////////////////////////////////////////////////
//
//  Class Name      : five
//  Description     : Entry point of the program
//
///////////////////////////////////////////////////////////////////
class five
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();      // Create object of Logic class
        int iValue = 7865;
        int iRet = lobj.CountDigits(iValue);   // Function call

        System.out.println("The number of digits in " + iValue + " is: " + iRet);
    }
}

///////////////////////////////////////////////////////////////////
//
//  Example Output:
//
//  Input  : 7865
//  Output : The number of digits in 7865 is: 4
//
///////////////////////////////////////////////////////////////////
