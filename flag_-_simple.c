#include <stdio.h>

/* flag '-', + taille minimale de champ */
/* test pertinents : value sup/inf a strlen de conv, 0		  */

int	main(void)
{
	int i = 42;
	char *s = "hello";

	printf("%-i\n", i); /* "42" */
	printf("%-00i\n", i); /* "42" */
	printf("%-10i\n", i); /* "42        " */
	printf("%-1i\n", i); /* "42" */
	printf("%-2i\n", i); /* "42" */
	printf("%-3i\n", i); /* "42 " */
	printf("%-4i\n", i); /* "42  " */
	
	printf("%-s\n", s); /* "hello" */
	printf("%-00s\n", s); /* "hello" */
	printf("%-10s\n", s); /* "hello     " */
	printf("%-1s\n", s); /* "hello" */
	printf("%-4s\n", s); /* "hello" */
	printf("%-5s\n", s); /* "hello" */
	printf("%-6s\n", s); /* "hello " */

	/* print (x - strlen(value)) spaces to the right of the value */
	/* similaire a taille de champ minimale */
	/* printf("%-0s\n", s); warning says :  */
	/* "flag '0' is ignored when flag '-' is present */
	/* that's why -00 */

	/* d conversion : */

	printf("%-d\n", i);
	printf("%-00d\n", i); 
	printf("%-10d\n", i);
	printf("%-1d\n", i); 
	printf("%-2d\n", i);
	printf("%-3d\n", i);
	printf("%-4d\n", i);

	/* u conversion : */

	printf("%-u\n", i);
	printf("%-00u\n", i);
	printf("%-10u\n", i);
	printf("%-1u\n", i);
	printf("%-2u\n", i);
	printf("%-3u\n", i);
	printf("%-4u\n", i);

	/* x conversion : */

	printf("%-x\n", i);
	printf("%-00x\n", i);
	printf("%-10x\n", i);
	printf("%-1x\n", i);
	printf("%-2x\n", i);
	printf("%-3x\n", i);
	printf("%-4x\n", i);

	/* X conversion : */

	printf("%-x\n", i);
	printf("%-00x\n", i);
	printf("%-10x\n", i);
	printf("%-1x\n", i);
	printf("%-2x\n", i);
	printf("%-3x\n", i);
	printf("%-4x\n", i);

	/* c conversion : */

	printf("%-c\n", i);
	printf("%-00c\n", i);
	printf("%-10c\n", i);
	printf("%-1c\n", i);
	printf("%-2c\n", i);
	printf("%-3c\n", i);
	printf("%-4c\n", i);

	/* p conversion : */

	printf("%-p\n", s);
	printf("%-00p\n", s);
	printf("%-10p\n", s);
	printf("%-11p\n", s);
	printf("%-12p\n", s);
	printf("%-13p\n", s);
	printf("%-14p\n", s);

	/* Meme resultat partout */
}
