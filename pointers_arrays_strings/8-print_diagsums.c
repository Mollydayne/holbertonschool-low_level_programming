#include <stdio.h>
#include "main.h"

/**
* print_diagsums :  prints a diagonal
*@a : square matice to print diagonal from
*@size : size of the matrice
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int *main_diag = a;
int *secondary_diag = a + size - 1;
int sum = 0, sum1 = 0;
for (int i = 0; i < size; i++)
{
sum += *main_diag;
sum1 += *secondary_diag;
main_diag += size + 1;
secondary_diag += size - 1;
}
printf("%d, %d\n", sum, sum1);
}
