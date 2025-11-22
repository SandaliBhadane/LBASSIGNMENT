

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Accept first Number
          Accept second number

          For each element in the array
                If element >= iNo1 
                      If element <= iNo2
                            Print element

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
//  Function Name :  Range
//  Description :    Prints all elements of the array
//                   that lie within the range iNo1 to iNo2
//  Input :          Integer array, Integer size, Integer iNo1, Integer iNo2
//  Output :         Integer
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

void Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iNo1) 
        {
            if(Arr[iCnt] <= iNo2)
            {
                printf("%d\n", Arr[iCnt]);
            }    
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
    int iStart = 0;
    int iEnd = 0;
  

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

    printf("Enter the start of range\n");
    scanf("%d", &iStart);

    printf("Enter the end of range\n");
    scanf("%d", &iEnd);

    Range(Arr, iLength, iStart, iEnd);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 6
//  Array : 10 20 30 40 50 60
//  Range : 25 50
//  Output : 30
//           40
//           50
//
//  Input : 5
//  Array : 1 5 10 15 20
//  Range : 0 10
//  Output : 1
//           5
//           10
//
//  Input : 4
//  Array : 7 8 9 10
//  Range : 12 20
//  Output : (No output)
//
////////////////////////////////////////////////////////////
