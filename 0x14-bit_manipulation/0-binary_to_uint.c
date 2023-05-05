#include "main.h"
/**
 * binary_to_uint - change a binary num to an unsigned int
 * @b: a pointer to a string of 0 and 1 characters
 *
 * Return:0 if there was an error, or change the  number,
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int a;
if (!b)
return (0);
for (a = 0; b[a]; a++)
{
if (b[a] == '0' || b[a] == '1')
result = result * 2 + (b[a] - '0');
else
return (0);
}
return (result);
}
