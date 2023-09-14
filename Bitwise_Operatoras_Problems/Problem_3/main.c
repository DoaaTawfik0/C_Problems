/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to get the status of nth bit of a number.
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
void Check_status_of_nth_bit(int number , int Bit_Number);



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

    Check_status_of_nth_bit(number , Bit_Number);

    return 0;
}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/

void Check_status_of_nth_bit(int number , int Bit_Number)
{
     int Bit_Status = 0;
     Bit_Status = (number>>Bit_Number)&1;

     if(Bit_Status == 1)
         printf("status of %d bit of number %d is set (1).", Bit_Number , number);
     else
         printf("status of %d bit of number %d is unset (0).", Bit_Number , number);

}
