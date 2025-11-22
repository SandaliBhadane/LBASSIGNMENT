/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          For each element in the array
                Initialise iCount = 0
                While element != 0
                      Divide element by 10
                      Increment iCount
                If iCount == 3
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
//  Function Name :  Digits
//  Description :    Displays all elements with exactly 3 digits
//  Input :          Integer array, Integer size
//  Output :         Integer
//  Author :        Sandali Bhadane
//  Date :          16/11/2025
//
////////////////////////////////////////////////////////////

void Digits(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0, itemp = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        itemp = Arr[iCnt];   
        iCount = 0;       

        while(itemp != 0)
        {
            itemp = itemp / 10;
            iCount++;
        }

        if(iCount == 3)
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

    Digits(Arr, iLength);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 6
//  Array : 12 123 456 7 890 23
//  Output : 123
//           456
//           890
//
//  Input : 5
//  Array : 1 22 333 4444 555
//  Output : 333
//           555
//
//  Input : 4
//  Array : 100 200 5 99
//  Output : 100
//           200
//
////////////////////////////////////////////////////////////
