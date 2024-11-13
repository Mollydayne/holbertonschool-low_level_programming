#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the allocated memory of 98 if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int length1 = 0;
unsigned int length2 = 0;
unsigned int i = 0;
unsigned int j = 0;


for (length1 = 0; s1 && s1[length1] != '\0'; length1++)
;
for (length2 = 0; s2 && s2[length2] != '\0'; length2++)
;
if (n < length2)
s3 = malloc(sizeof(char) * (length1 + n + 1));
else
s3 = malloc(sizeof(char) * (length1 + length2 + 1));

if (!s3)
return (NULL);

while (i < length1)
{
s3[i] = s1[i];
i++;
}
while (n < length2 && i < (length1 + n))
s3[i++] = s2[j++];
while (n >= length2 && i < (length1 + length2))
s3[i++] = s2[j++];

s3[i] = '\0';

return (s3);
}
