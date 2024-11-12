#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 *
 *@s1: first string
 *@s2: second string to concatenate
 *
 * Return: pointer to the copy (Success), NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int i, j;
unsigned int len1 = 0;
unsigned int len2 = 0;
for (i = 0; s1 && s1[i]; i++)
len1++;
for (j = 0; s2 && s2[i]; j++)
len2++;
s3 = malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
return (NULL);
for (i = 0; i < len1; i++)
s3[i] = s1[i];
for (j = 0; j < len2; j++)
s3[len1 + len2] = '\0';
return (s3);
}

