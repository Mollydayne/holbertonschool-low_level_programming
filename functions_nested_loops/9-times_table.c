#include  <stdio.h>
#include "main.h"
/**
*times_table- prints times table
*
*Return: n or -n
*/
void times_table(void)
{
  int chiffre, multiplicateur, resultat;

for (chiffre = 0; chiffre <= 9; chiffre++)
{
for (multiplicateur = 0; multiplicateur <= 9 ; multiplicateur++)
{
resultat = chiffre * multiplicateur;
if (multiplicateur != 0)
{_putchar(',');
_putchar(' ');
}
if
(resultat < 10 && multiplicateur != 0)
{
_putchar(' ');
}
if
(resultat > 9)
{
_putchar((resultat / 10) + '0');
}
_putchar((resultat % 10) + '0'); 
}
_putchar('\n');
}
}
