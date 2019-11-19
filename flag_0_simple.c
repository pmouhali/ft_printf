#include <stdio.h>

/* flag '0', + taille minimale de champ */
/* test pertinents : value sup/inf a strlen de conv, 0		  */

int	main(void)
{
	int i = 42;
	char *s = "hello";

	printf("%0i\n", i); /* "42" */
	printf("%00i\n", i); /* "42" */
	printf("%010i\n", i); /* "0000000042" */
	printf("%01i\n", i); /* "42" */
	printf("%02i\n", i); /* "042" */
	printf("%03i\n", i); /* "0042 " */
	printf("%04i\n", i); /* "42  " */
	
	printf("%0s\n", s); /* "hello" */
	printf("%000s\n", s); /* "hello" */
	printf("%010s\n", s); /* "00000hello" */
	printf("%01s\n", s); /* "hello" */
	printf("%04s\n", s); /* "hello" */
	printf("%05s\n", s); /* "hello" */
	printf("%06s\n", s); /* "0hello" */

	/* print (x - strlen(value)) zeros to the left of the value */
	/* similaire a taille de champ minimale */
}
