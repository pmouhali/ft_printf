NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = 		ft_printf.c \
		print_string.c \
		format_set.c \
		format_arg.c \
		fset_init.c \
		fset_field_width.c \
		fset_precision.c \
		fset_zero.c \
		fset_less.c \
		w_c_conv.c \
		w_char37_conv.c \
		w_d_conv.c \
		w_i_conv.c \
		w_p_conv.c \
		w_s_conv.c \
		w_u_conv.c \
		w_xl_conv.c \
		w_xu_conv.c \
		precision.c \
		super_putstr.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_utoa.c \
		ft_dec_to_hex.c \
		ft_get_address.c \
		ft_index.c \
		ft_strlen.c \
		ft_isdigit.c \
		ft_strdup.c \
		ft_strndup.c \
		ft_strjoin.c \
		ft_memset.c \
		
HEADER = ft_printf.h

OBJS = $(SRCS:.c=.o)

$(NAME): $(SRCS) $(OBJS)
		gcc $(FLAGS) -c $(SRCS) -I./ $(HEADER)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all: $(NAME)

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean all

norme:
	norminette $(SRCS) $(HEADER)
