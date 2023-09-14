/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem:program to find maximum between three numbers using if
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
int Max_Number(int Num1 , int Num2 , int Num3);


/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{
    int Number1 , Number2 , Number3 , Res;

    /*Input 3 Numbers From User*/
    printf("Enter First Number: ");
    scanf("%d",&Number1);
    printf("Enter Second Number: ");
    scanf("%d",&Number2);
    printf("Enter Third Number: ");
    scanf("%d",&Number3);

    /*Finding Max Number*/
    Res = Max_Number(Number1 , Number2 , Number3);

    /*Printing Max Number*/
    printf("Maximum Number = %d\n",Res);

    return 0;
}

/*************************************************************************
                       Functions Definition Section
*************************************************************************/

int Max_Number(int Num1 , int Num2 , int Num3)
{
    if((Num1 > Num2) && (Num1 > Num3))
    {
       return Num1 ;
    }
    else if ((Num2 > Num1) && (Num2 > Num3))
    {
       return Num2;
    }
    else if ((Num3 > Num1) && (Num3 > Num1))
    {
       return Num3;
    }
    else
       return Num1;
}
