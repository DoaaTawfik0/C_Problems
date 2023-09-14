/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to input side of a triangle and check whether triangle is valid or not using if else.
*****         is valid or not using if else.
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




/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{
    /*Variables Definition*/
    int side1,side2,side3;
    /*Asking User to enter Three sides of a triangle*/
    printf("Enter First side: ");
    scanf(" %d",&side1);
    printf("Enter Second side: ");
    scanf(" %d",&side2);
    printf("Enter Third side: ");
    scanf(" %d",&side3);
    /*Implementing IF Else to check whether a triangle is valid or not */
    if ( (side1 + side2 > side3 ) && (side1 + side3 > side2 ) && (side2 + side3 > side1 ) )
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}


/*************************************************************************
                       Functions Definition Section
*************************************************************************/
