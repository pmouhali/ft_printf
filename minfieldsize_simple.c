#include <stdio.h>

/* taille de champ minimale, nombre optionnel avant la conversion */
/* test pertinents : value sup/inf a strlen de conv, 0		  */
/* pas pertinents : valeures negatives et 0 : considered as flags */

int	main(void)
{
	int i = 42;
	char *s = "hello";

	printf("%10i\n", i); /* "        42" */
	printf("%1i\n", i); /* "42" */
	printf("%2i\n", i); /* "42" */
	printf("%3i\n", i); /* " 42" */
	printf("%4i\n", i); /* "  42" */
	
	printf("%10s\n", s); /* "     hello" */
	printf("%1s\n", s); /* "hello" */
	printf("%4s\n", s); /* "hello" */
	printf("%5s\n", s); /* "hello" */
	printf("%6s\n", s); /* " hello" */

	/* print (x - strlen(value)) spaces to the left of the value */
}
