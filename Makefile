MSRC = ft_printf.c ft_conv.c libftput/ft_putchar.c libftput/ft_putstr.c libftput/ft_putnbr.c libftput/ft_putnbr_base.c

BSRC = bonus/ft_conv_bonus.c bonus/ft_flgs_bonus.c bonus/ft_hash_flg_bonus.c bonus/ft_plus_flg_bonus.c bonus/ft_space_flg_bonus.c bonus/ft_one_flg_bonus.c

MOBJ =	$(MSRC:.c=.o)

BOBJ =	$(BSRC:_bonus.c=.o)

NAME =	libftprintf.a

AR =	ar rcs

CC =	cc -Wall -Wextra -Werror

RM =	rm -f

%.o: %.c libftprintf.h libftput/libftput.h
	$(CC) -c $< -o $@

%.o: %_bonus.c bonus/libftprintf_bonus.h libftput/libftput.h
	$(CC) -c $< -o $@

$(NAME): $(MOBJ)
	$(AR) $(NAME) $(MOBJ)

all: $(NAME)

bonus: $(NAME) $(BOBJ)
	$(AR) $(NAME) $(BOBJ)

clean:
	$(RM) $(MOBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
