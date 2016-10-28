# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdavis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 09:50:14 by kdavis            #+#    #+#              #
#    Updated: 2016/10/14 12:20:25 by kdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

FILENAMES		=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
FILENAMES		+=ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c
FILENAMES		+=ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c
FILENAMES		+=ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c
FILENAMES		+=ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
FILENAMES		+=ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c
FILENAMES		+=ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c
FILENAMES		+=ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c
FILENAMES		+=ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c
FILENAMES		+=ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c
FILENAMES		+=ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c
FILENAMES		+=ft_putnbr_fd.c ft_iswhitespace.c ft_memdup.c ft_lstnew.c
FILENAMES		+=ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c
FILENAMES		+=ft_lstmap.c ft_lstadd_back.c ft_lstsize.c ft_splcount.c
FILENAMES		+=ft_isupper.c ft_islower.c ft_new_handle.c ft_delcontent.c
FILENAMES		+=ft_realloc.c ft_power.c ft_putbits.c ft_negflag.c 
FILENAMES		+=ft_itoa_base.c ft_strrev.c ft_bitstoa.c ft_strchrrmv.c
FILENAMES		+=ft_strctchr.c ft_strctrim.c


BUILD			=$(addprefix build/, $(FILENAMES:.c=.o))
CFLAGS			=-Wall -Wextra -Werror
CC				= gcc

all: $(NAME)

$(NAME): $(FILENAMES) | $(BUILD) 
	ar rcs $@ $(BUILD)

build/%.o: %.c | build
		$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf build/

fclean: clean
	rm -rf $(NAME)

re: fclean all

build:
	mkdir build/
