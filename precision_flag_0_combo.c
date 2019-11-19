#include <stdio.h>

/* precision with flag 0 */
/*  warning: flag '0' results in undefined behavior with 's' conversion specifier */
/*  warning: flag '0' results in undefined behavior with 'c' conversion specifier */
/*  warning: flag '0' results in undefined behavior with 'p' conversion specifier */

int	main(void)
{
	int i = 42;
	char *s = "he";

	printf("%0.i\n", i); /* "42" */
	printf("%01.2i\n", i); /* "42" */
	printf("%02.2i\n", i); /* "42" */
	printf("%05.3i\n", i); /* "  042" */
	printf("%013.10i\n", i); /* "   0000000042" */
	
	/* conversion numeriques : (x - strlen(value with prec)) spaces left */
	/* Si une  précision  est fournie avec une conversion numérique (duixX)
	   l'attribut 0 est  ignoré. */
	/* Voila pourquoi il y a des espaces a gauche maglre le flag 0, il est ignorer ducou on retien juste la taille de champ minimale */

	printf("%0.s\n", s); /* "" */
	printf("%01.s\n", s); /* "0" */
	printf("%02.1s\n", s); /* "0h" */
	printf("%03.3s\n", s); /* "0he" */
	printf("%03.10s\n", s); /* "0he" */
	
	/* conversion s : (x - (value with prec)) spaces left */

	/* d conversion : */

	printf("%0.d\n", i);
	printf("%01.2d\n", i);
	printf("%02.2d\n", i);
	printf("%05.3d\n", i);
	printf("%013.10d\n", i);

	/* u conversion : */

	printf("%0.u\n", i);
	printf("%01.2u\n", i);
	printf("%02.2u\n", i);
	printf("%05.3u\n", i);
	printf("%013.10u\n", i);

	/* x conversion : */

	printf("%0.x\n", i);
	printf("%01.2x\n", i);
	printf("%02.2x\n", i);
	printf("%05.3x\n", i);
	printf("%013.10x\n", i);

	/* X conversion : */

	printf("%0.x\n", i);
	printf("%01.2x\n", i);
	printf("%02.2x\n", i);
	printf("%05.3x\n", i);
	printf("%013.10x\n", i);
	/* Meme resultats pour toutes les conversion numeriques */

	/* c conversion : */

	printf("%0.c\n", i); /* "*" */
	printf("%01.2c\n", i); /* "*" */
	printf("%02.2c\n", i) /* "0*" */;
	printf("%05.3c\n", i); /* "0000*" */
	printf("%013.10c\n", i); /* "000000000000*" */

	/* p conversion : */
	/* comme conversion numeriques, le 0 est ignorer, donc les espaces sont a gauches et restent des espaces, la precision fonctionne */
	printf("%0.p\n", s); /* address is larger than zero and contain more than zero char, print only address */
	printf("%02.9p\n", s); /* address is larger than 2, address contain exactly 9 chars, print only address */
	printf("%020.10p\n", s); /* address is (9 + 2 chars ('0x'))11, precision adds one zero (10 - 9), '-' adds 8 spaces. value after precision = 12 + 8 = field = 20.  */
	printf("%020.15p\n", s); /* same with 5 more zeros, and 5 less spaces */
	printf("%013.20p\n", s); /* same with 10 more zero and no spaces bc field is 20 large. */
}
