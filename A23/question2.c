
/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Accept number to search

          For each element in the array
                If element is equal to iNo
                       Return current index iCnt

          If iNo is not found
                Return -1

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
//  Function Name :  FirstOcc
//  Description :    Returns the first occurrence index of
//                   a given number iNo in the array
//  Input :          Integer array, Integer size, Integer iNo
//  Output :         Integer
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

int FirstOcc(
                int Arr[],     // Integer array
                int iSize,     // Size of array
                int iNo        // Number to search
             )
{
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
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
    scanf("%d", &iLength);

    Arr = (int*)malloc(iLength * sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements of the array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    printf("Enter the element you want to search\n");
    scanf("%d", &iValue);

    iRet = FirstOcc(Arr, iLength, iValue);

    if(iRet != -1)
    {
        printf("%d occurs at index %d\n", iValue, iRet);
    }
    else
    {
        printf("%d is not present in the array\n", iValue);
    }

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 10 20 30 20 50
//  Search : 20
//  Output : 20 occurs at index 1
//
//  Input : 4
//  Array : 1 2 3 4
//  Search : 5
//  Output : 5 is not present in the array
//
//  Input : 6
//  Array : 11 22 33 44 55 11
//  Search : 11
//  Output : 11 occurs at index 0
//
////////////////////////////////////////////////////////////
