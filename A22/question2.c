
////////////////////////////////////////////////////////////
//
//  File name :     22.2.c
//  Description :   This program calculates the difference
//                  between frequency of even numbers and
//                  frequency of odd numbers in an array
//  Author :        Sandali Bhadane
//  Date :          15/11/2025
//
////////////////////////////////////////////////////////////

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory for array Arr
          Accept all array elements from user

          Initialise:Counters

          For each element in the array
                If element is even
                      increment counter
                Else
                      increment counter

          Compute difference

          Display the difference

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
//  Function Name :  Frequency
//  Description :    Calculates difference between frequency
//                   of even numbers & odd numbers
//  Input :          Integer array, Integer size
//  Output :         Integer
//  Author :        Sandali Bhadane
//  Date :          30/10/2025
//
////////////////////////////////////////////////////////////

int Frequency(
                int Arr[],      // Integer array
                int iSize       // Size of array
             )
{
    int iCnt = 0;
    int iCount1 = 0;  
    int iCount2 = 0;  

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
    }
    return (iCount1 - iCount2);
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
    scanf("%d",&iLength);

    Arr = (int*)malloc(iLength * sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements you want in the array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = Frequency(Arr, iLength);
    printf("Difference of frequency (Even - Odd) is : %d\n", iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 6
//  Array : 10 11 20 21 30 41
//  Even Count = 3,  Odd Count = 3
//  Output : 0
//
//  Input : 5
//  Array : 2 4 6 7 9
//  Even Count = 3, Odd Count = 2
//  Output : 1
//
//  Input : 5
//  Array : 1 3 5 7 9
//  Even Count = 0, Odd Count = 5
//  Output : -5
//
////////////////////////////////////////////////////////////
