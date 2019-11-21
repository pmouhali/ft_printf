#include <stdio.h>

int	main(void)
{
	int i = 10;
	char *s2 = "pizza";
	
	/* warning: more '%' conversions than data arguments */
	/* print un truc chelou */

	printf("%i, %s\n", i); /* "10, xZ���^?" */

	printf("%s, %i\n", s2); /* "pizza, 0" */
}
