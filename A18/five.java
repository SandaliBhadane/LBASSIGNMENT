
////////////////////////////////////////////////////////////
// 
//  File name :     Five.java
//  Description :   To check whether a number is positive 
//                  negative or zero
//  Author :        Sandali bhadane
//  Date :          30/10/2025
//
////////////////////////////////////////////////////////////

class Logic
{
    void CheckSign(int iNo)
    {
        if (iNo > 0)
        {
            System.out.println("The number is Positive");
        }
        else if (iNo < 0)
        {
            System.out.println("The number is Negative");
        }
        else
        {
            System.out.println("The number is Zero");
        }
    }
}

class five
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        int iValue = -15;

        lobj.CheckSign(iValue);
    }
}
