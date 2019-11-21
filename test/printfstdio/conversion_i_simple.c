#include <stdio.h>
#include <limits.h>

/* same as conversion d						*/
/* conversion : i						*/
/* traduit la valeur de l'argument int ou equ en integer	*/
/* tests pertinents : min max zero random non int values	*/

int	main(void)
{
	printf("%d\n", LONG_MIN); /* 0 */
	printf("%d\n", LONG_MAX); /* -1 */
	printf("%d\n", INT_MIN); /* same */
	printf("%d\n", INT_MAX); /* same */
	printf("%d\n", INT_MIN - 22); /* 2147483626 */
	printf("%d\n", INT_MAX + 22); /* -2147483627 */
	printf("%i\n", 0); /* same */
	printf("%i\n", 1); /* same */
	printf("%i\n", 9); /* same */
	printf("%i\n", 10); /* same */
	printf("%i\n", 1000000000000); /* -727379968 */
	printf("%i\n", -1000000000000); /* 727379968 */

	char c = 'c';
	long n = 999999999999;
	char *s = "abc";

	printf("%i\n", c); /* 99 */
	printf("%i\n", n); /* -727379969 */
	printf("%i\n", s); /* 36622254 */

	/* Only warnings given, also for int min value */
}
