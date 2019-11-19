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
}
