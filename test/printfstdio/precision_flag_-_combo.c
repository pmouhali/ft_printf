#include <stdio.h>

/* precision with flag - */

int	main(void)
{
	int i = 42;
	char *s = "he";

	printf("%-.i\n", i); /* "42" */
	printf("%-1.2i\n", i); /* "42" */
	printf("%-2.2i\n", i); /* "42" */
	printf("%-5.3i\n", i); /* "042  " */
	printf("%-13.10i\n", i); /* "0000000042   " */
	
	/* conversion numeriques : (x - strlen(value with prec)) spaces right */

	printf("%-.s\n", s); /* "" */
	printf("%-1.s\n", s); /* " " */
	printf("%-2.1s\n", s); /* "h " */
	printf("%-3.3s\n", s); /* "he " */
	printf("%-3.10s\n", s); /* "he " */
	
	/* conversion s : (x - (value with prec)) spaces right */

	/* d conversion : */

	printf("%-.d\n", i);
	printf("%-1.2d\n", i);
	printf("%-2.2d\n", i);
	printf("%-5.3d\n", i);
	printf("%-13.10d\n", i);

	/* u conversion : */

	printf("%-.u\n", i);
	printf("%-1.2u\n", i);
	printf("%-2.2u\n", i);
	printf("%-5.3u\n", i);
	printf("%-13.10u\n", i);

	/* x conversion : */

	printf("%-.x\n", i);
	printf("%-1.2x\n", i);
	printf("%-2.2x\n", i);
	printf("%-5.3x\n", i);
	printf("%-13.10x\n", i);

	/* X conversion : */

	printf("%-.x\n", i);
	printf("%-1.2x\n", i);
	printf("%-2.2x\n", i);
	printf("%-5.3x\n", i);
	printf("%-13.10x\n", i);
	/* Meme resultats pour toutes les conversion numeriques */

	/* c conversion : */

	printf("%-.c\n", i); /* "*" */
	printf("%-1.2c\n", i); /* "*" */
	printf("%-2.2c\n", i) /* "* " */;
	printf("%-5.3c\n", i); /* "*    " */
	printf("%-13.10c\n", i); /* "*            " */

	/* p conversion : */

	printf("%-.p\n", s); /* address is larger than zero and contain more than zero char, print only address */
	printf("%-2.9p\n", s); /* address is larger than 2, address contain exactly 9 chars, print only address */
	printf("%-20.10p\n", s); /* address is (9 + 2 chars ('0x'))11, precision adds one zero (10 - 9), '-' adds 8 spaces. value after precision = 12 + 8 = field = 20.  */
	printf("%-20.15p\n", s); /* same with 5 more zeros, and 5 less spaces */
	printf("%-13.20p\n", s); /* same with 10 more zero and no spaces bc field is 20 large. */
}
