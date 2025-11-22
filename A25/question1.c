
////////////////////////////////////////////////////////////
//
//  File name :     25.1.c
//  Description :   This program calculates the difference
//                  between the sum of even elements and
//                  sum of odd elements in the given array
//  Author :        Sandali sunil Bhadane
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Initialise iSum1 = 0, iSum2 = 0

          For each element in the array
                If element is even
                      iSum1 = iSum1 + element
                Else
                      iSum2 = iSum2 + element

          Return (iSum1 - iSum2)

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
//  Function Name :  Diffrence
//  Description :    Returns difference between sum of
//                   even and sum of odd elements
//  Input :          Integer array, Integer size
//  Output :         Integer (difference)
//  Author :        Sandali sunil Bhadane
//  Date :           18/11/2025
//
////////////////////////////////////////////////////////////

int Diffrence(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }  
    }
    return (iSum1 - iSum2);
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
    scanf("%d", &iLength);

    Arr = (int*)malloc(iLength * sizeof(int));
    if(NULL == Arr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements you want to in an array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = Diffrence(Arr, iLength);
    printf("Difference between even and odd elements are %d\n", iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 6
//  Array : 2 3 4 5 6 7
//  Output : Difference between even and odd elements are -3
//
//  Input : 5
//  Array : 10 20 30 1 2
//  Output : Difference between even and odd elements are 59
//
//  Input : 4
//  Array : 1 3 5 7
//  Output : Difference between even and odd elements are -16
//
////////////////////////////////////////////////////////////
