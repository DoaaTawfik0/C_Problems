/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to input amount from user and print minimum number
*****         of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
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
    int amount;
    int note500,note100,note50,note20,note10,note5,note2,note1;
    /*  Variables Initialization*/
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0 ;
    /*Asking User to enter any Amount*/
    printf("Enter any Amount: ");
    scanf(" %d",&amount);
    /*Implementing IF Else to print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount*/
    if(amount>=500)
    {
        note500=amount/500;
        amount-= (note500 * 500);
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount-= (note100 * 100);
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount-= (note50 * 50);
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount-= (note20 * 20);
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount-= (note10 * 10);
    }
    if(amount>=5)
    {
        note5=amount/5;
        amount-= (note5 * 5);
    }
    if(amount>=2)
    {
        note2=amount/2;
        amount-= (note2 * 2);
    }
    if(amount>=1)
    {
        note1=amount;

    }
    /*OUTPUT*/
    printf("Total Number Of Notes\n");
    printf("500 = %d\n",note500);
    printf("100 = %d\n",note100);
    printf("50 = %d\n",note50);
    printf("20 = %d\n",note20);
    printf("10 = %d\n",note10);
    printf("5 = %d\n",note5);
    printf("2 = %d\n",note2);
    printf("1 = %d\n",note1);

    return 0;
}


/*************************************************************************
                       Functions Definition Section
*************************************************************************/
