/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to count trailing zeros in a binary number using bitwise operator
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
#define INT_SIZE  (sizeof(int)*8)


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
    int Number, counter, iterator;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &Number);

    counter = 0;

    /* Iterate over each bit of the number */
    for(iterator = 0 ; iterator < INT_SIZE ; iterator++)
    {
        /* If set bit is found the terminate from loop*/
        if((Number >> iterator ) & 1)
        {
            /* Terminate from loop */
            break;
        }

        /* Increment trailing zeros count */
        counter++;
    }

    printf("Total number of trailing zeros in %d is %d.", Number, counter);

    return 0;

}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/
