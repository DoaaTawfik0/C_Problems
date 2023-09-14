/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to input sides of a triangle and check whether a triangle
*****         is equilateral, scalene or isosceles triangle using if else.
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
    /*Asking User to enter Three Sides of a triangle*/
    printf("Enter First side: ");
    scanf(" %d",&side1);
    printf("Enter Second side: ");
    scanf(" %d",&side2);
    printf("Enter Third side: ");
    scanf(" %d",&side3);
    /*Implementing IF Else to check a whether triangle is equilateral, scalene or isosceles triangle */
    if (side1  == side2 && side2 == side3)
    {
        /* All Sides Are Equal*/
        printf("Equilateral triangle.");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3 )
    {
        /*Two Sides Are Equal*/
        printf("Isosceles triangle.");
    }
    else
    {
        printf("Scalene triangle.");
    }
    return 0;
}


/*************************************************************************
                       Functions Definition Section
*************************************************************************/
