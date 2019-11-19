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
}
