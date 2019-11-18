#include <stdio.h>

/* conversion : c  							  */
/* la valeur int ou equ est traduite en unsigned char                     */
/* tests pertinents : valeures negatives, valeures superieur a ASCII max  */
/* comportement en cas d'argument different de int                        */

int	main(void)
{
	printf("%c\n", -2147483648); /* null char */
	printf("%c\n", -1); /* chelou */
	printf("%c\n", 0); /* null char */
	printf("%c\n", 67); /* C Ascii char */
	printf("%c\n", 127); /* chelou */
	printf("%c\n", 128); /* M - Ascii char + chelou */
	printf("%c\n", 200); /* chelou */
	printf("%c\n", 255); /* chelou */
	printf("%c\n", 256); /* null char */
	printf("%c\n", 2147483647); /* chelou */

	unsigned int ui = 45;
	long l = 49;
	char c = 'a';
	char *s = "ab";

	printf("%c\n", ui); /* - Ascii char */
	printf("%c\n", l); /* 1 ascii char */
	printf("%c\n", c); /* a ascii char */
	printf("%c\n", s); /* chelou */

	/* No errors given for wrong variables types, only warnings */
}
