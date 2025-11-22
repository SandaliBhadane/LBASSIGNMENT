
////////////////////////////////////////////////////////////
//
//  File name :     22.3.c
//  Description :   This program checks whether number 11
//                  is present inside the given array
//  Author :        Sandali Bhadane
//  Date :          30/10/2025
//
////////////////////////////////////////////////////////////

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          For each element in the array
                If element is equal to 11
                       return TRUE

          If loop ends without finding 11
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
//  Description :    Checks whether 11 is present in array
//  Input :          Integer array, Integer size
//  Output :         Boolean 
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

bool Check(
            int Arr[],      // Integer array
            int iSize       // Size of array
          )
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    bRet = Check(Arr, iLength);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 10 11 20 30 40
//  Output : 11 is present
//
//  Input : 4
//  Array : 1 2 3 4
//  Output : 11 is absent
//
//  Input : 6
//  Array : 11 11 5 6 7 8
//  Output : 11 is present
//
////////////////////////////////////////////////////////////
