/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to Toggle nth bit of a number
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
void Toggle_nth_bit(int number , int Bit_Number);



/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{

    int number , Bit_Number;
    printf("Enter any Number: ");
    scanf("%d",&number);
    printf("Input nth bit number: ");
    scanf("%d",&Bit_Number);

    Toggle_nth_bit(number , Bit_Number);

    return 0;
}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/

void Toggle_nth_bit(int number , int Bit_Number)
{
     number ^= (1<<Bit_Number);
     printf("Number after Toggling nth bit: %d in decimal ",number);
}