#include <stdio.h>

/* flag '0', + taille minimale de champ */
/* test pertinents : value sup/inf a strlen de conv, 0		  */

int	main(void)
{
	int i = 42;
	char *s = "hello";

	printf("%0i\n", i); /* "42" */
	printf("%00i\n", i); /* "42" */
	printf("%010i\n", i); /* "0000000042" */
	printf("%01i\n", i); /* "42" */
	printf("%02i\n", i); /* "042" */
	printf("%03i\n", i); /* "0042 " */
	printf("%04i\n", i); /* "42  " */

	/* warning : flag '0' results in undefined behavior with 's' conversion specifier */
	
	printf("%0s\n", s); /* "hello" */
	printf("%000s\n", s); /* "hello" */
	printf("%010s\n", s); /* "00000hello" */
	printf("%01s\n", s); /* "hello" */
	printf("%04s\n", s); /* "hello" */
	printf("%05s\n", s); /* "hello" */
	printf("%06s\n", s); /* "0hello" */

	/* print (x - strlen(value)) zeros to the left of the value */
	/* similaire a taille de champ minimale */

	/* d conversion : */

	printf("%0d\n", i);
	printf("%00d\n", i);
	printf("%010d\n", i);
	printf("%01d\n", i);
	printf("%02d\n", i);
	printf("%03d\n", i);
	printf("%04d\n", i);

	/* u conversion : */

	printf("%0u\n", i);
	printf("%000u\n", i);
	printf("%010u\n", i);
	printf("%01u\n", i);
	printf("%02u\n", i);
	printf("%03u\n", i);
	printf("%04u\n", i);

	/* x conversion : */

	printf("%0x\n", i);
	printf("%000x\n", i);
	printf("%010x\n", i);
	printf("%01x\n", i);
	printf("%02x\n", i);
	printf("%03x\n", i);
	printf("%04x\n", i);

	/* X conversion : */

	printf("%0x\n", i);
	printf("%00x\n", i);
	printf("%010x\n", i);
	printf("%01x\n", i);
	printf("%02x\n", i);
	printf("%03x\n", i);
	printf("%04x\n", i);

	/* c conversion : */

	printf("%0c\n", i);
	printf("%00c\n", i);
	printf("%010c\n", i);
	printf("%01c\n", i);
	printf("%02c\n", i);
	printf("%03c\n", i);
	printf("%04c\n", i);
	
	/* Meme resultats partout sauf pour p conversion */
	/* p conversion : warning : */
	/* flag '0' results in undefined behavior with 'p' conversion specifier */

	printf("%0p\n", s);
	printf("%000p\n", s);
	printf("%010p\n", s);
	printf("%011p\n", s);
	printf("%012p\n", s); /* print 0x + 1 zero avant l'adress */
	printf("%013p\n", s); /* print 0x + 2 zero avant l'adress */
	printf("%014p\n", s); /* print 0x + 3 zero avant l'adress */
}
