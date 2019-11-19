#include <stdio.h>

/* flag '.' : precision */
/* Une  précision eventuelle, sous la forme d'un point
   (`.')  suivi  par  un  nombre.  Si  ce  nombre  est
   absent,   la   précision  est  fixée  à  0.   Cette
   précision indique un nombre minimum de  chiffres  à
   faire  apparaître  lors  des conversions (diuxX) et
   le nombre maximum de caractères à imprimer pour  la
   conversion s. */

int	main(void)
{
	int i = 42;
	char *s = "42";

	printf("%.i\n", i); /* "42" */
	printf("%.2i\n", i); /* "42" */
	printf("%.3i\n", i); /* "042" */
	printf("%.4i\n", i); /* "0042" */

	printf("%.s\n", s); /* "" */
	printf("%.1s\n", s); /* "4" */
	printf("%.2s\n", s); /* "42" */
	printf("%.4s\n", s); /* "42*/
	
	/* for diuxX conversions, works like '0' flag */
	/* for s conversion, print only x characters of value */

	/* d conversion : */

	printf("%.10d\n", i);
	printf("%.1d\n", i);
	printf("%.2d\n", i);
	printf("%.3d\n", i);
	printf("%.4d\n", i);

	/* u conversion : */

	printf("%.10u\n", i);
	printf("%.1u\n", i);
	printf("%.2u\n", i);
	printf("%.3u\n", i);
	printf("%.4u\n", i);

	/* x conversion : */

	printf("%.x\n", i);
	printf("%.00x\n", i);
	printf("%.10x\n", i);
	printf("%.1x\n", i);
	printf("%.2x\n", i);
	printf("%.3x\n", i);
	printf("%.4x\n", i);

	/* X conversion : */

	printf("%.10x\n", i);
	printf("%.1x\n", i);
	printf("%.2x\n", i);
	printf("%.3x\n", i);
	printf("%.4x\n", i);

	/* Meme resultats jusque la */	

	/* c conversion : warning */
	/* precision used with 'c' conversion specifier, resulting in undefined behavior */
	/* "*" a tout les tests */
	printf("%.0c\n", i);
	printf("%.10c\n", i);
	printf("%.1c\n", i);
	printf("%.2c\n", i);
	printf("%.3c\n", i);
	printf("%.4c\n", i);

	/* p conversion : warning :*/
	/* precision used with 'p' conversion specifier, resulting in undefined behavior */
	printf("%.p\n", s);   /* "0x1034b9ec6" */
	printf("%.10p\n", s); /* "0x01034b9ec6" */
	printf("%.11p\n", s); /* "0x001034b9ec6" */
	printf("%.12p\n", s); /* "0x0001034b9ec6" */
	printf("%.13p\n", s); /* "0x00001034b9ec6" */
	printf("%.14p\n", s); /* "0x000001034b9ec6" */
	/* 0x then address(number) is proccessed. print (x -strlen(address after '0x')) zeros to the left of the address */
}
