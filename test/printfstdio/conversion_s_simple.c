#include <stdio.h>

/* conversion : s							*/
/* affiche une chaine de charactere jusqu'au charactere nul de fin	*/
/* tests pertinents : random, chaine vide, nulle, wrong data type	*/

int	main(void)
{
	printf("%s\n", "hello"); /* hello */
	printf("%s\n", ""); /* */
	char *s;
	s = NULL;
	printf("%s\n", s); /* (null) */
	
	int i = 2000;
	int ii[] = {48, 49, 50};
	char c = 'a';
	
	printf("%s\n", ii); /* 0 */ 
/*	printf("%s\n", i); segfault */ 
/*	printf("%s\n", c); segfault */

	/* Only warnings given */
}
