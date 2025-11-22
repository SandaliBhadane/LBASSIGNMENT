
////////////////////////////////////////////////////////////
//
//  File name :     22.5.c
//  Description :   This program returns the frequency of a
//                  specific number entered by the user
//                  from the given array
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Accept iNo (number to search)

          Initialise iCount = 0

          For each element in the array
                If element is equal to iNo
                       increment iCount

          Return iCount (frequency of iNo)

    STOP
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name :  Frequency
//  Description :    Returns frequency of given number iNo
//                   present in the array
//  Input :          Integer array, Integer size, Integer iNo
//  Output :         Integer (frequency)
//  Author :        Sandali Bhadane
//  Date :          30/10/2025
//
////////////////////////////////////////////////////////////

int Frequency(
                int Arr[],     // Integer array
                int iSize,     // Size of array
                int iNo        // Number to search
             )
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0;
    int *Arr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of elements you want in array\n");
    scanf("%d",&iLength);

    Arr = (int*)malloc(iLength * sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements of the array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Enter the element you want to search\n");
    scanf("%d",&iValue);

    iRet = Frequency(Arr, iLength, iValue);
    printf("Frequency of %d is : %d\n", iValue, iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 6
//  Array : 10 20 10 30 10 40
//  Search : 10
//  Output : Frequency of 10 is 3
//
//  Input : 5
//  Array : 1 2 3 4 5
//  Search : 9
//  Output : Frequency of 9 is 0
//
//  Input : 7
//  Array : 5 5 5 7 7 1 5
//  Search : 5
//  Output : Frequency of 5 is 4
//
////////////////////////////////////////////////////////////
