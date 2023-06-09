#include "main.h"

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be toyed with
 * Return: length s
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*(s + count))
{
count++;
count += _strlen_recursion(s + count);
}
return (count);
}

/**
 * _palindrome_checker - Checks  if a string s is a palindrome.
 * @s: The string to be checked.
 * @count: length of s
 * @index: The index of the string to be checked.
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int _palindrome_checker(char *s, int count, int index)
{
if (s[index] == s[count / 2])
return (1);
if (s[index] == s[count - index - 1])
return (_palindrome_checker(s, count, index + 1));
return (0);
}

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to be palindromized (if that's a word, lmao)
*Return: 1 if the string is a palindrome else 0.
*/
int is_palindrome(char *s)
{
int index = 0;
int count = _strlen_recursion(s);
if (!(*s))
return (1);
return (_palindrome_checker(s, count, index));
}
