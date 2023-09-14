/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to count leading zeros in a binary number using bitwise operator
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
#define INT_SIZE  (sizeof(int)*(8))


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
    int x = 1, var = 0,iterator;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &Number);

    for(iterator = 0 ; iterator <= INT_SIZE ; iterator++)
    {
        if(Number&(1 << iterator))
        {
            var += x;
        }
        x *= 2;

        if(var == Number)
            break;

    }
    if((iterator == 0) && (Number == 0))
        printf("Total number of leading zeros in %d is %d", Number, INT_SIZE);
    else
        printf("Total number of leading zeros in %d is %d", Number, INT_SIZE-iterator-1);

    return 0;
}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/