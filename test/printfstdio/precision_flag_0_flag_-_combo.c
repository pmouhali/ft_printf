#include <stdio.h>

/* precision with flag 0 and flag -*/

int	main(void)
{
	int i = 42;
	char *s = "he";

	printf("%0-.i\n", i); /* "42" */
	printf("%0-1.2i\n", i); /* "42" */
	printf("%0-2.2i\n", i); /* "42" */
	printf("%0-5.3i\n", i); /* "042  " */
	printf("%0-13.10i\n", i); /* "0000000042   " */
	
	printf("%0-.s\n", s); /* "" */
	printf("%0-1.s\n", s); /* " " */
	printf("%0-2.1s\n", s); /* "h " */
	printf("%0-3.3s\n", s); /* "he " */
	printf("%0-3.10s\n", s); /* "he " */

	/* si 0 puis - : 0 est ignorer, seul - s'execute. */
	
	printf("%-0.i\n", i); /* "42" */
	printf("%-01.2i\n", i); /* "42" */
	printf("%-02.2i\n", i); /* "42" */
	printf("%-05.3i\n", i); /* "042  " */
	printf("%-013.10i\n", i); /* "0000000042   " */
	
	printf("%-0.s\n", s); /* "" */
	printf("%-01.s\n", s); /* " " */
	printf("%-02.1s\n", s); /* "h " */
	printf("%-03.3s\n", s); /* "he " */
	printf("%-03.10s\n", s); /* "he " */

	/* pareil, donc dans tout les cas '-' ecrase '0' */
}
