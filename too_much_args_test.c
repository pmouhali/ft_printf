#include <stdio.h>

int	main(void)
{
	int i = 10;
	int j = 1;
	char *s1 = "hello";
	char *s2 = "pizza";
	
	/* data argument not used by format string */
	/* ignore juste les args en trop */

	printf("%i, %s\n", i, s1, s2); /* "10, hello" */
	printf("%i, %s\n", i, s1, j); /* "10, hello" */

	printf("%s, %i\n", s2, i, j); /* "pizza, 10" */
	printf("%s, %i\n", s2, i, s1); /* "pizza, 10" */
}
