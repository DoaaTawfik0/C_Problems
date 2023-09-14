/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to check whether a character is uppercase or lowercase
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

    /*Checking whether a character is uppercase or lowercase */
    Check_Alphabet(Character);

    return 0;
}


/*************************************************************************
                       Functions Definition Section
*************************************************************************/

void Check_Alphabet(char Character)
{
    if((Character >= 'a') && (Character <= 'z'))
    {
        printf("Character %c is Lowercase\n",Character);
    }
    else if((Character >= 'A') && (Character <= 'Z'))
    {
        printf("Character %c is Uppercase\n",Character);
    }
    else
    {
        printf("Character %c isn't Alphabet\n",Character);
    }

}
