
////////////////////////////////////////////////////////////
// 
//  File name :     Two.java
//  Description :   To check whether the number is palindrome or not
//  Author :        Sandali Sunil Bhadane 
//  Date :          30/10/2025
//
////////////////////////////////////////////////////////////

import java.util.Scanner;

class Logic
{
    boolean CheckPalindrome(int iNo)
    {
        int iTemp = iNo;
        int iRev = 0;
        int iDigit = 0;

      
        while (iNo != 0)
        {
            iDigit = iNo % 10;          
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }

        
        if (iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class two
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int iNo = sobj.nextInt();

        Logic lobj = new Logic();
        boolean bRet = lobj.CheckPalindrome(iNo);

        if (bRet == true)
        {
            System.out.println(iNo + " is a Palindrome Number");
        }
        else
        {
            System.out.println(iNo + " is Not a Palindrome Number");
        }
    }
}
