#include <stdio.h>
#include <limits.h>

/* conversion : u						*/
/* traduit la valeur de l'argument int ou equ en unsigned int	*/
/* tests pertinents : min max zero random non int values	*/

int	main(void)
{
	printf("%u\n", LONG_MIN); /* 0 */
	printf("%u\n", LONG_MAX); /* 4294967295 */
	printf("%u\n", INT_MIN); /* 2147483648 */
	printf("%u\n", INT_MAX); /* same */
	printf("%u\n", INT_MIN - 22); /* 2147483626 */
	printf("%u\n", INT_MAX + 22); /* 2147483669 */
	printf("%u\n", 0); /* same */
	printf("%u\n", 1); /* same */
	printf("%u\n", 9); /* same */
	printf("%u\n", 10); /* same */
	printf("%u\n", 1000000000000); /* 3567587328 */
	printf("%u\n", -1000000000000); /* 727379968 */

	char c = 'c';
	long n = 999999999999;
	char *s = "abc";

	printf("%u\n", c); /* 99 */
	printf("%u\n", n); /* 3567587327 */
	printf("%u\n", s); /* never the same, reads an address probalbly */

	/* Only warnings given, also for int min value */
}
