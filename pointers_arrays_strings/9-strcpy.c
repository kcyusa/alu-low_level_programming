/**
 * _strcpy -  function to copy from one string to another
 *
 * @dest: pointer to destination
 * @src: pointer to src
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
