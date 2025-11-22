///////////////////////////////////////////////////////////////////
//
//  Algorithm
//
//  START
//      Create object of SumDigits class
//      Call CalculateSum() by passing a number
//      Inside function:
//          Initialise sum as 0
//          Run loop from 1 to given number
//          Add each number to sum
//      Return final sum
//      Display result
//  STOP
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//  Class Name       : SumDigits
//  Description      : Contains method to calculate sum of first 
//                     N natural numbers
//
///////////////////////////////////////////////////////////////////
class SumDigits
{
    ///////////////////////////////////////////////////////////////
    //
    //  Function Name : CalculateSum
    //  Description   : Calculates sum of first N natural numbers
    //  Input         : Integer
    //  Output        : Integer
    //
    ///////////////////////////////////////////////////////////////
    int CalculateSum(int iNo)
    {
        int iSum = 0;

        for (int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;   // Add current number to sum
        }

        return iSum;
    }
}

///////////////////////////////////////////////////////////////////
//
//  Class Name       : one
//  Description      : Entry point of program
//
///////////////////////////////////////////////////////////////////
class one
{
    ///////////////////////////////////////////////////////////////
    //
    //  Entry Point Function
    //
    ///////////////////////////////////////////////////////////////
    public static void main(String A[])
    {
        int iRet = 0;

        SumDigits sobj = new SumDigits();   // Create object

        iRet = sobj.CalculateSum(10);       // Call function

        System.out.println("Sum of first 10 natural numbers is: " + iRet);
    }
}
