#include <stdio.h>
#include <limits.h>

/* conversion : X 							*/
/* traduit la valeur de l'argument int ou equ en hexadecimal majuscules	*/
/* hexadicemal non signe, peut etre convertit d'abord en unsigned int ?	*/
/* tests pertinents : min max zero random non int values		*/

int	main(void)
{
	/* All the same with maj letters */
	printf("%X\n", LONG_MIN); /* 0 */
	printf("%X\n", LONG_MAX); /* ffffffff */
	printf("%X\n", INT_MIN); /* 80000000 */
	printf("%X\n", INT_MAX); /* 7fffffff */
	printf("%X\n", INT_MIN - 22); /* 7fffffea */
	printf("%X\n", INT_MAX + 22); /* 80000015 */
	printf("%X\n", 0); /* same */
	printf("%X\n", 1); /* same */
	printf("%X\n", 9); /* same */
	printf("%X\n", 10); /* a */
	printf("%X\n", 1000000000000); /* d4a51000 */
	printf("%X\n", -1000000000000); /* 2b5af000 */

	char c = 'c';
	long n = 999999999999;
	char *s = "abc";

	printf("%X\n", c); /* 63 */
	printf("%X\n", n); /* d4a50fff */

	/* Only warnings given, also for int min value */
}
