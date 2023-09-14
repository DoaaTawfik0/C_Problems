/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to print day name of week
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
void Check_Day(int Day);



/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{
     int Day;

    /*Input any DAY From User*/
    printf("Enter any Day(1-7): ");
    scanf("%d",&Day);

    /*printing Day_Name of week*/
    Check_Day(Day);

    return 0;
}


/*************************************************************************
                       Functions Definition Section
*************************************************************************/

void Check_Day(int Day)
{
    if(Day == 1)
    {
        printf("Saturday");
    }
    else if(Day == 2)
    {
        printf("Sunday");
    }
    else if(Day == 3)
    {
        printf("Monday");
    }
    else if(Day == 4)
    {
        printf("Tuesday");
    }
    else if(Day == 5)
    {
        printf("Wednesday");
    }
    else if(Day == 6)
    {
        printf("Thursday");
    }
    else if(Day == 7)
    {
        printf("Friday");
    }
    else
        printf("Invalid Input! Please enter week number between 1-7.");
}
