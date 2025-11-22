/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          For each element in the array
                If element % 3 == 0 AND element % 5 == 0
                      Display element

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
//  Function Name :  Display
//  Description :    Displays all elements divisible by 3
//                   and 5
//  Input :          Integer array, Integer size
//  Output :         Integer
//  Author :        Sandali sunil Bhadane
//  Date :           18/11/2025
//
////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Elements divisible by 3 and 5 are\n");
        if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 3) == 0))
        {
            printf("%d\n", Arr[iCnt]);
        }  
    }
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

    Display(Arr, iLength);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 6
//  Array : 3 5 15 30 10 12
//  Output : Elements divisible by 3 and 5 are
//           15
//           30
//
//  Input : 5
//  Array : 1 2 3 4 5
//  Output : (No output)
//
//  Input : 4
//  Array : 15 30 45 60
//  Output : Elements divisible by 3 and 5 are
//           15
//           30
//           45
//           60
//
////////////////////////////////////////////////////////////
