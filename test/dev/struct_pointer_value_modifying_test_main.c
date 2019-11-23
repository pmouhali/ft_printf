// #include "ft_printf.h"
#include <stdio.h>

typedef struct  s_format
{
        int flags;
        int precision;
        int field_width;
}               t_format;

void	f0_set(t_format **fmt)
{
	t_format *tmp;
	
	tmp = *fmt;
	tmp->flags = 32;
	tmp->precision = 10;
	tmp->field_width = -1;
}

void	format_set(t_format *fmt)
{
	f0_set(&fmt);
	printf("from format_set : flags %i\n", fmt->flags);
	printf("from format_set : preci %i\n", fmt->precision);
	printf("from format_set : field %i\n", fmt->field_width);

}

void	format_string(void)
{
	t_format fmt;

	format_set(&fmt);
	printf("from format_str : flags %i\n", fmt.flags);
	printf("from format_str : preci %i\n", fmt.precision);
	printf("from format_str : field %i\n", fmt.field_width);
}

int	main(void)
{
	format_string();
} 
