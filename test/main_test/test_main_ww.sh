#!/bin/sh

rm -f ww_printf_result.txt
rm -f ww_ft_printf_result.txt

touch ww_printf_result.txt
touch ww_ft_printf_result.txt

gcc -g -I./../../ -L./../../ main_ft_printf_without_warnings.c -lftprintf -Wall -Wextra -Werror -o ww_main_ft_printf

gcc main_printf_without_warnings.c -o ww_main_printf

./ww_main_printf | cat -e >> ww_printf_result.txt
./ww_main_ft_printf | cat -e >> ww_ft_printf_result.txt

diff ww_printf_result.txt ww_ft_printf_result.txt
