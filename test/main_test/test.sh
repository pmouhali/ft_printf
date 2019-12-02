#!/bin/sh

rm -f printf_result.txt
rm -f ft_printf_result.txt

touch printf_result.txt
touch ft_printf_result.txt

gcc -g -I./../../../ft_printf1/ -L./../../../ft_printf1/ main_ft_printf.c -lftprintf -Wall -Wextra -Werror -o main_ft_printf

gcc main_printf.c -o main_printf

./main_printf | cat -e >> printf_result.txt
./main_ft_printf | cat -e >> ft_printf_result.txt

diff printf_result.txt ft_printf_result.txt
