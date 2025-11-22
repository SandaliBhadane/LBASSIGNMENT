
////////////////////////////////////////////////////////////
//
//  File name :     22.4.c
//  Description :   This program returns the frequency of
//                  number 11 present in the given array
//  Author :        Sandali Bhadane
//  Date :          30/10/2025
//
////////////////////////////////////////////////////////////

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Initialise iCount = 0

          For each element in the array
                If element is equal to 11
                       increment Counter

          Return iCount (frequency of 11)

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
//  Description :    Returns frequency of number 11 in array
//  Input :          Integer array, Integer size
//  Output :         Integer
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

int Frequency(
                int Arr[],      // Integer array
                int iSize       // Size of array
             )
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    iRet = Frequency(Arr, iLength);
    printf("Frequency of 11 is : %d\n", iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 6
//  Array : 11 20 11 30 40 11
//  Output : Frequency of 11 is 3
//
//  Input : 5
//  Array : 10 22 33 44 55
//  Output : Frequency of 11 is 0
//
//  Input : 4
//  Array : 11 11 11 11
//  Output : Frequency of 11 is 4
//
////////////////////////////////////////////////////////////
