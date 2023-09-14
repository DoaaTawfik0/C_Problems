/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to swap two numbers using bitwise operator
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
void Swap_Two_Numbers(int First_Number, int Second_Number);


/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{
    int First_Number, Second_Number ;

    printf("Enter First Number: ");
    scanf("%d",&First_Number);

    printf("Enter Second Number: ");
    scanf("%d",&Second_Number);

    printf("---------------------------------\n");
    printf("Original value of Number_1 = %d\n", First_Number);
    printf("Original value of Number_2 = %d\n", Second_Number);
    printf("---------------------------------\n");

    Swap_Two_Numbers(First_Number, Second_Number);

    return 0;
}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/

void Swap_Two_Numbers(int First_Number, int Second_Number)
{

    First_Number  ^= Second_Number;
    Second_Number ^= First_Number;
    First_Number  ^= Second_Number;

    printf("Number_1 after swapping = %d\n", First_Number);
    printf("Number_2 after swapping = %d\n", Second_Number);

}
