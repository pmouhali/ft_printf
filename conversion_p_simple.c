#include <stdio.h>

/* conversion : p							*/
/* affiche la valeur de l'argument void* pointeur, donc une addressse	*/
/* tests pertinent : aucun ? passer aux tests comparatifs direct	*/ 

int	main(void)
{
	char s[] = "tests";
	int *i;
	i = NULL;

	printf("%p\n", s); /* une address random */
	printf("%p\n", i); /* 0x0 */
}
