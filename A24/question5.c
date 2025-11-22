/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          For each element in the array
                Initialise iSum = 0
                While element != 0
                      iDigit = element % 10
                      iSum = iSum + iDigit
                      element = element / 10
                Display iSum

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
//  Function Name :  SumDigits
//  Description :    Calculates and prints sum of digits
//                   of each element in the array
//  Input :          Integer array, Integer size
//  Output :         Integer
//  Author :        Sandali Bhadane
//  Date :          16/11/2025
//
////////////////////////////////////////////////////////////

void SumDigits(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0, itemp = 0, iDigit = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        itemp = Arr[iCnt];   
        iSum = 0;            

        while(itemp != 0)
        {
            iDigit = itemp % 10;  
            iSum = iSum + iDigit; 
            itemp = itemp / 10;   
        }

        printf("%d\n", iSum);
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

    printf("Enter number of elements:\n");
    scanf("%d", &iLength);

    Arr = (int*)malloc(iLength * sizeof(int));
    if(NULL == Arr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    SumDigits(Arr, iLength);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 12 34 56 78 90
//  Output : 3
//           7
//           11
//           15
//           9
//
//  Input : 4
//  Array : 123 456 789 0
//  Output : 6
//           15
//           24
//           0
//
//  Input : 3
//  Array : 111 222 333
//  Output : 3
//           6
//           9
//
////////////////////////////////////////////////////////////
