#include <stdio.h>

/* precision without flag, only minimum size field, an optinal number */
/* same everywhere, print x - value_len spaces left */

int	main(void)
{
	int i = 42;
	char *s = "he";

	printf("%1.2i\n", i); /* "42" */
	printf("%2.2i\n", i); /* "42" */
	printf("%5.3i\n", i); /* "  042" */
	printf("%13.10i\n", i); /* "   0000000042" */
	
	printf("%1.s\n", s); /* " " */
	printf("%2.1s\n", s); /* " h" */
	printf("%3.3s\n", s); /* " he" */
	printf("%3.10s\n", s); /* " he" */

	/* d conversion : */

	printf("%1.2d\n", i);
	printf("%2.2d\n", i);
	printf("%5.3d\n", i);
	printf("%13.10d\n", i);

	/* u conversion : */

	printf("%1.2u\n", i);
	printf("%2.2u\n", i);
	printf("%5.3u\n", i);
	printf("%13.10u\n", i);

	/* x conversion : */

	printf("%1.2x\n", i);
	printf("%2.2x\n", i);
	printf("%5.3x\n", i);
	printf("%13.10x\n", i);

	/* X conversion : */

	printf("%1.2x\n", i);
	printf("%2.2x\n", i);
	printf("%5.3x\n", i);
	printf("%13.10x\n", i);

	/* c conversion : */

	printf("%1.2c\n", i); /* "*" */
	printf("%2.2c\n", i) /* " *" */;
	printf("%5.3c\n", i); /* "    *" */
	printf("%13.10c\n", i); /* "            *" */

	/* p conversion : */

	printf("%2.9p\n", s);
	printf("%20.10p\n", s);
	printf("%20.15p\n", s);
	printf("%13.20p\n", s);
}
