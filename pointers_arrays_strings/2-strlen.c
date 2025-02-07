/**
 * _strlen - string size
 *
 * @s: pointer to characters
 * Return: size.
 */
int _strlen(char *s)
{
int length = 0;
while (*s)
{
length++;
s++;
}
return (length);
}
