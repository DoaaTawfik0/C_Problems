/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to check whether a triangle is valid or not if angles
*****         are given using if else.
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
    int Angle1,Angle2,Angle3,sum;
    /*Asking User to enter Three Angles*/
    printf("Enter First Angle: ");
    scanf(" %d",&Angle1);
    printf("Enter Second Angle: ");
    scanf(" %d",&Angle2);
    printf("Enter Third Angle: ");
    scanf(" %d",&Angle3);
    sum = Angle1 + Angle2 + Angle3;
    /*Implementing IF Else to check whether a triangle is valid or not if angles are given using if else*/
    if ( sum == 180 && Angle1 > 0 && Angle2 > 0 && Angle3 > 0)
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
