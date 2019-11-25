#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     super_putstr(char *s, int n, int free_s, int print_null);

# define TRUE 1
# define FALSE 0

int		main(void)
{
	char *s;

	int i;


/* NULL input */
	i = super_putstr(NULL, -1, FALSE, FALSE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

	i = super_putstr(NULL, -1, FALSE, TRUE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);


	i = super_putstr(NULL, 2, FALSE, TRUE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);


	i = super_putstr(NULL, 2, FALSE, FALSE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

/* Stack alloc'd string input */
	i = super_putstr("hell", -1, FALSE, FALSE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

	i = super_putstr("hell", -1, FALSE, TRUE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

	i = super_putstr("hell", 2, FALSE, TRUE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

	i = super_putstr("hell", 2, FALSE, FALSE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);


/* Heap alloc'd string input */
	i = -1;
	s = malloc(10);
	while (++i < 9)
		s[i] = 'x';
	s[i] = 0;
	i = super_putstr(s, -1, TRUE, FALSE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

	i = -1;
	s = malloc(10);
	while (++i < 9)
		s[i] = 'x';
	s[i] = 0;
	i = super_putstr(s, -1, TRUE, TRUE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

	i = -1;
	s = malloc(10);
	while (++i < 9)
		s[i] = 'x';
	s[i] = 0;
	i = super_putstr(s, 2, TRUE, TRUE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);

	i = -1;
	s = malloc(10);
	while (++i < 9)
		s[i] = 'x';
	s[i] = 0;
	i = super_putstr(s, 2, TRUE, FALSE);
	printf("[%d] ", i);
	super_putstr("\n", -1, FALSE, FALSE);
}
