/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to convert decimal to binary number system
*****Version: 1.00
**************************************************************************
**************************************************************************/



/*************************************************************************
                       Includes Section

*************************************************************************/

#include <stdio.h>

/*************************************************************************
                       Macros Section

*************************************************************************/
#define INT_SIZE  ((sizeof(int))*(8))


/*************************************************************************
                       Global Variables Section

*************************************************************************/


/*************************************************************************
                       Function Prototypes Section

*************************************************************************/



/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{
    int Number ;
    int arr[INT_SIZE] = {0},iterator, Bit_Value;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &Number);

    for(iterator = 0 ; iterator < INT_SIZE ; iterator++)
    {
        Bit_Value = (Number>>iterator)& 1;
        arr[iterator] = Bit_Value;
    }

    for(iterator = INT_SIZE-1 ; iterator >= 0 ; iterator--)
    {
        printf("%d",arr[iterator]);
    }

    return 0;
}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/
