
////////////////////////////////////////////////////////////
//
//  File name :     22.1.c
//  Description :   This program counts total even elements
//                  present inside the array
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

/*  ALGORITHM

    START
          Accept the number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all elements from user

          Initialise Counter
          For each element in the array
                check if its even
                     increment Counter
          Display Total even numbers

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
//  Function Name :  CountEven
//  Description :    It counts how many even numbers are
//                   present in the given array
//  Input :          Integer array, Integer size
//  Output :         Integer 
//  Author :        Sandali Bhadane
//  Date :          30/10/2025
//
////////////////////////////////////////////////////////////

int CountEven(
                int Arr[],      // Integer array
                int iSize       // Size of array
             )
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
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

    iRet = CountEven(Arr, iLength);
    printf("Even numbers in array are : %d\n", iRet);

    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 10 21 32 41 50
//  Output : 3
//
//  Input : 4
//  Array : 1 3 5 7
//  Output : 0
//
//  Input : 6
//  Array : 2 4 6 8 10 12
//  Output : 6
//
////////////////////////////////////////////////////////////
