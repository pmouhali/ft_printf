#include <stdio.h>
#include <limits.h>

/* same as conversion i						*/
/* conversion : d						*/
/* traduit la valeur de l'argument int ou equ en double		*/
/* tests pertinents : min max zero random non int values	*/

int	main(void)
{
	printf("%d\n", LONG_MIN); /* 0 */
	printf("%d\n", LONG_MAX); /* -1 */
	printf("%d\n", INT_MIN); /* same */
	printf("%d\n", INT_MAX); /* same */
	printf("%d\n", INT_MIN - 22); /* 2147483626 */
	printf("%d\n", INT_MAX + 22); /* -2147483627 */
	printf("%d\n", 0); /* same */
	printf("%d\n", 1); /* same */
	printf("%d\n", 9); /* same */
	printf("%d\n", 10); /* same */
	printf("%d\n", LONG_MIN - 2000); /* -2000 */
	printf("%d\n", LONG_MAX + 2000); /* 1999 */
	printf("%i\n", 1000000000000); /* -727379968 */
	printf("%i\n", -1000000000000); /* 727379968 */

	char c = 'c';
	long n = 999999999999;
	char *s = "abc";

	printf("%d\n", c); /* 99 */
	printf("%d\n", n); /* -727379969 */
	printf("%d\n", s); /* never the same, probably reads the address */

	/* Only warnings given, also for int min value */
}
