#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *          containing a copy of the string given as parameter
 *
 * @str: the string to be copied
 *
 * Return: a pointer to the duplicate string, or NULL if insufficient memory
 *         was available
 */
char *_strdup(char *str)
{
char *dup_str;
int i, len = 0;

if (str == NULL)
return (NULL);

/* Find length of string */
for (i = 0; str[i] != '\0'; i++)
len++;

/* Allocate memory for duplicate string */
dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);

/* Copy string to new memory location */
for (i = 0; str[i] != '\0'; i++)
dup_str[i] = str[i];

dup_str[i] = '\0';

return (dup_str);
}
