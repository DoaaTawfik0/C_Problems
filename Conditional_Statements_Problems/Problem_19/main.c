/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to enter student marks and find percentage and grade
*****
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
    int Physics,Chemistry,Biology,Mathematics,Computer;
    float percentage;
    /*Asking User to enter student marks*/
    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&Computer);
    /*Calculating percentage*/
    percentage=((Physics+Chemistry+Biology+Mathematics+Computer) / 5.0);
    printf("Percentage = %.2f\n ",percentage);
    /*Implementing IF Else to enter student marks and find percentage and grade*/
    if(percentage >= 90)
    {
        printf("Grade A");
    }
    else if(percentage >= 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 70)
    {
        printf("Grade C");
    }
    else if(percentage >= 60)
    {
        printf("Grade D");
    }
    else if(percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}


/*************************************************************************
                       Functions Definition Section
*************************************************************************/
