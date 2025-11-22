

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Initialise iMax = Arr[0]

          For each element in the array
                If element > iMax
                       iMax = element

          Return iMax

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
//  Function Name :  Maximum
//  Description :    Returns the largest element in the array
//  Input :          Integer array, Integer size
//  Output :         Integer
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;
    
    for(iCnt = 0, iMax = Arr[0]; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }  
    }
    return iMax;
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

    iRet = Maximum(Arr, iLength);
    printf("Largest of all is %d\n", iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 1 2 3 4 5
//  Output : Largest of all is 5
//
//  Input : 4
//  Array : -1 -5 -3 -10
//  Output : Largest of all is -1
//
//  Input : 6
//  Array : 11 22 33 44 55 22
//  Output : Largest of all is 55
//
////////////////////////////////////////////////////////////
