/**************************************************************************
**************************************************************************
*****Author: Doaa Tawfik
*****Problem: program to check whether a character is vowel or consonant
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

    /*Checking Character is vowel or consonant and Printing it*/
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
        if((Character == 'a') || (Character == 'e') || (Character == 'i') || (Character == 'o') || (Character == 'u') || (Character == 'A') || (Character == 'E') || (Character == 'I') || (Character == 'O') || (Character == 'U'))
        {
            printf("'%c' is Vowel.", Character);
        }
        else
        {
            printf("'%c' is Consonant.", Character);
        }
    }
    else
    {
        printf("Character %c is't an Alphabet\n",Character);
    }
}
