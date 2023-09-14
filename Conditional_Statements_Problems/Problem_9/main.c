/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to check alphabet, digit or special character
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
void Check_Alphabet(char Character);



/*************************************************************************
                       Main Function Section
*************************************************************************/

int main()
{
    char Character;

    /*Input any Character From User*/
    printf("Enter any Character: ");
    scanf("%c",&Character);

    /*Checking alphabet, digit or special character*/
    Check_Alphabet(Character);

    return 0;
}


/*************************************************************************
                       Functions Definition Section
*************************************************************************/

void Check_Alphabet(char Character)
{
    if(((Character >= 'a') && (Character <= 'z')) || ((Character >= 'A') && (Character <= 'Z')))
    {
        printf("Character %c is an Alphabet\n",Character);
    }
    else if((Character >= '0') && (Character <= '9'))
    {
        printf("Character %c is a digit\n",Character);
    }
    else
    {
         printf("Character %c is a special character\n",Character);
    }
}
