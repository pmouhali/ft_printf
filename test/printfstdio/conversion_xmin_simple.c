#include <stdio.h>
#include <limits.h>

/* conversion : x							*/
/* traduit la valeur de l'argument int ou equ en hexadecimal minuscules	*/
/* hexadicemal non signe, peut etre convertit d'abord en unsigned int ?	*/
/* tests pertinents : min max zero random non int values		*/

int	main(void)
{
	printf("%x\n", LONG_MIN); /* 0 */
	printf("%x\n", LONG_MAX); /* ffffffff */
	printf("%x\n", INT_MIN); /* 80000000 */
	printf("%x\n", INT_MAX); /* 7fffffff */
	printf("%x\n", INT_MIN - 22); /* 7fffffea */
	printf("%x\n", INT_MAX + 22); /* 80000015 */
	printf("%x\n", 0); /* same */
	printf("%x\n", 1); /* same */
	printf("%x\n", 9); /* same */
	printf("%x\n", 10); /* a */
	printf("%x\n", 1000000000000); /* d4a51000 */
	printf("%x\n", -1000000000000); /* 2b5af000 */

	char c = 'c';
	long n = 999999999999;
	char *s = "abc";

	printf("%x\n", c); /* 63 */
	printf("%x\n", n); /* d4a50fff */

	/* Only warnings given, also for int min value */
}
