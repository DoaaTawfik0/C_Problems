/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to check divisibility of any number by 5 & 11
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



/*************************************************************************
                       Global Variables Section

*************************************************************************/


/*************************************************************************
                       Function Prototypes Section

*************************************************************************/
void Check_Divisibility(int Number);


/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{
    int Number;

    /*Input any Number From User*/
    printf("Enter any Number: ");
    scanf("%d",&Number);

    /*Checking divisibility of any number by 5 & 11 and Printing it*/
    Check_Divisibility(Number);

    return 0;
}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/

void Check_Divisibility(int Number)
{
    if((Number % 5 == 0) && (Number % 11 == 0))
        printf("Number %d is divisible by 5 and 11",Number);
    else
        printf("Number %d is't divisible by 5 and 11",Number);
}
