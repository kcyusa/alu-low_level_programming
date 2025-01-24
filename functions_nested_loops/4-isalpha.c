/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check (in ASCII)
 *
 * Description: This function determines if the given character
 * is an alphabetic character, either uppercase (A-Z) or lowercase (a-z).
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
