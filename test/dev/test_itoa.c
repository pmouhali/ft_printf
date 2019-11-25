#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* same as conversion i						*/
/* conversion : d						*/
/* traduit la valeur de l'argument int ou equ en double		*/
/* tests pertinents : min max zero random non int values	*/

char	*ft_itoa(int n);

int	main(void)
{
	printf("%s\n", ft_itoa((unsigned int)LONG_MIN)); /* 0 */
	printf("%s\n", ft_itoa((unsigned int)LONG_MAX)); /* -1 */
	printf("%s\n", ft_itoa((unsigned int)INT_MIN)); /* same */
	printf("%s\n", ft_itoa((unsigned int)INT_MAX)); /* same */
	printf("%s\n", ft_itoa((unsigned int)(INT_MIN - 22))); /* 2147483626 */
	printf("%s\n", ft_itoa((unsigned int)(INT_MAX + 22))); /* -2147483627 */
	printf("%s\n", ft_itoa((unsigned int)0)); /* same */
	printf("%s\n", ft_itoa((unsigned int)1)); /* same */
	printf("%s\n", ft_itoa((unsigned int)9)); /* same */
	printf("%s\n", ft_itoa((unsigned int)10)); /* same */

	printf("%s\n", ft_itoa((unsigned int)(LONG_MIN - 2000))); /* -2000 */
	printf("%s\n", ft_itoa((unsigned int)(LONG_MAX + 2000))); /* 1999 */
	printf("%s\n", ft_itoa((unsigned int)1000000000000)); /* -727379968 */
	printf("%s\n", ft_itoa((unsigned int)-1000000000000)); /* 727379968 */

	char c = 'c';
	long n = 999999999999;
	char *s = "abc";

	printf("%s\n", ft_itoa((unsigned int)c)); /* 99 */
	printf("%s\n", ft_itoa((unsigned int)n)); /* -727379969 */
//	printf("%s\n", ft_itoa(s)); /* never the same, probably reads the address */

	/* Only warnings given, also for int min value */
}
