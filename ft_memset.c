void	*ft_memset(void *s, int c, unsigned int n)
{
		unsigned char *a;

		a = s;
		while (n > 0)
		{
				*a = c;
				a++;
				n--;
		}
		return (s);
}
