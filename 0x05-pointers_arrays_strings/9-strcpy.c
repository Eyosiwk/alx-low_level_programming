#include "main.h"
/**
 *_strcpy - copies the string pointed to by scr
 *@dest: A pointer to a char that will be changed
 *@scr: A pointer to a char that will be changed
 *Return: dest
 */

char *_strcpy(char *dest, char *scr)
{

int i;

i = 0;

while (scr[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
