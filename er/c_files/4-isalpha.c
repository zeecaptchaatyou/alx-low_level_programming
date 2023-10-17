#include "main.h"

/**
 * _isalpha - Function checks alphabetic character.
 * @c: charcater to check if it's alphabet
 *
 * Return: 1 if the letter is upper or lower case, 0 if otherwise
 */

int _isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    else 
    {
        return (0);
    }

}