

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Accept number to search

          For each element in the array
                If element is equal to iNo
                       return TRUE

          If loop ends without finding iNo
                return FALSE

    STOP
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////
//
//  Function Name :  Check
//  Description :    Checks whether a given number iNo
//                   is present in the array
//  Input :          Integer array, Integer size, Integer iNo
//  Output :         Boolean 
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

bool Check(
            int Arr[],      // Integer array
            int iSize,      // Size of array
            int iNo         // Number to search
          )
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }
    return false;
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
    bool bRet = false;

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

    bRet = Check(Arr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present\n", iValue);
    }
    else
    {
        printf("%d is absent\n", iValue);
    }

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 1 2 3 4 5
//  Search : 3
//  Output : 3 is present
//
//  Input : 4
//  Array : 10 20 30 40
//  Search : 15
//  Output : 15 is absent
//
//  Input : 6
//  Array : 11 22 33 44 11 55
//  Search : 11
//  Output : 11 is present
//
////////////////////////////////////////////////////////////
