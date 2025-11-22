

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Initialise iMin = Arr[0]

          For each element in the array
                If element < iMin
                       iMin = element

          Return iMin

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
//  Function Name :  Minimum
//  Description :    Returns the smallest element in the array
//  Input :          Integer array, Integer size
//  Output :         Integer 
//  Author :        Sandali Bhadane
//  Date :          16/11/2025
//
////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iSize)
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
    return iMin;
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

    iRet = Minimum(Arr, iLength);
    printf("Smallest of all is %d\n", iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 1 2 3 4 5
//  Output : Smallest of all is 1
//
//  Input : 4
//  Array : -1 -5 -3 -10
//  Output : Smallest of all is -10
//
//  Input : 6
//  Array : 11 22 33 44 5 22
//  Output : Smallest of all is 5
//
////////////////////////////////////////////////////////////
