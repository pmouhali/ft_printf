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

	/* d conversion : */

	printf("%10d\n", i);
	printf("%1d\n", i);
	printf("%2d\n", i);
	printf("%3d\n", i);
	printf("%4d\n", i);

	/* u conversion : */

	printf("%10u\n", i);
	printf("%1u\n", i);
	printf("%2u\n", i);
	printf("%3u\n", i);
	printf("%4u\n", i);

	/* x conversion : */

	printf("%10x\n", i);
	printf("%1x\n", i);
	printf("%2x\n", i);
	printf("%3x\n", i);
	printf("%4x\n", i);

	/* X conversion : */

	printf("%10x\n", i);
	printf("%1x\n", i);
	printf("%2x\n", i);
	printf("%3x\n", i);
	printf("%4x\n", i);

	/* c conversion : */

	printf("%10c\n", i);
	printf("%1c\n", i);
	printf("%2c\n", i);
	printf("%3c\n", i);
	printf("%4c\n", i);

	/* p conversion : */

	printf("%10p\n", s);
	printf("%11p\n", s);
	printf("%12p\n", s);
	printf("%13p\n", s);
	printf("%14p\n", s);

	/* Meme resultat partout */
}
