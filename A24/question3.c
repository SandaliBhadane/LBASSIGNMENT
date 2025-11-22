/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Initialise iMin = Arr[0]
          For each element in the array
                If element < iMin
                       iMin = element

          Initialise iMax = Arr[0]
          For each element in the array
                If element > iMax
                       iMax = element

          Return (iMax - iMin)

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
//  Description :    Returns the difference between the largest
//                   and smallest element in the array
//  Input :          Integer array, Integer size
//  Output :         Integer 
//  Author :        Sandali Bhadane
//  Date :          16/11/2025
//
////////////////////////////////////////////////////////////

int Diffrence(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;
    
    for(iCnt = 0, iMin = Arr[0]; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }  
    }

    int iMax = 0;
    
    for(iCnt = 0, iMax = Arr[0]; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }  
    }

    return (iMax - iMin);
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

    printf("Enter the number of elements you want in array \n");
    scanf("%d", &iLength);

    Arr = (int*)malloc(iLength * sizeof(int));
    if(NULL == Arr)
    {
        printf("Unable to allocated memory\n");
        return -1;
    }

    printf("Enter the elements you want to in an array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = Diffrence(Arr, iLength);
    printf("Difference between Largest and smallest element is %d\n", iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 1 2 3 4 5
//  Output : Difference between Largest and smallest element is 4
//
//  Input : 4
//  Array : -10 -5 -3 -1
//  Output : Difference between Largest and smallest element is 9
//
//  Input : 6
//  Array : 11 22 33 44 55 22
//  Output : Difference between Largest and smallest element is 44
//
////////////////////////////////////////////////////////////
