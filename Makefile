# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdavis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 09:50:14 by kdavis            #+#    #+#              #
#    Updated: 2016/11/04 08:16:50 by kdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

SUBDIR			= memory list gnl leftovers

MEMORY			=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
MEMORY			+=ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c ft_memdup.c
MEMORY			+=ft_memrealloc.c ft_memreallocf.c

LIST			=ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c
LIST			+=ft_lstmap.c ft_lstadd_back.c ft_lstsize.c ft_relink_lst.c
LIST			+=ft_delcontent.c

GNL				=get_next_line.c

LEFTOVERS		+=ft_strlen.c ft_strdup.c ft_strcpy.c
LEFTOVERS		+=ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c
LEFTOVERS		+=ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c
LEFTOVERS		+=ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
LEFTOVERS		+=ft_isprint.c ft_toupper.c ft_tolower.c
LEFTOVERS		+=ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c
LEFTOVERS		+=ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c
LEFTOVERS		+=ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c
LEFTOVERS		+=ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c
LEFTOVERS		+=ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c
LEFTOVERS		+=ft_putnbr_fd.c ft_iswhitespace.c
LEFTOVERS		+=ft_splcount.c
LEFTOVERS		+=ft_isupper.c ft_islower.c ft_new_handle.c
LEFTOVERS		+=ft_power.c ft_putbits.c ft_negflag.c 
LEFTOVERS		+=ft_itoa_base.c ft_strrev.c ft_bitstoa.c ft_strchrrmv.c
LEFTOVERS		+=ft_strctchr.c ft_strctrim.c
LEFTOVERS		+=ft_strndup.c ft_absolute.c ft_atoll.c
LEFTOVERS		+=ft_atol.c ft_putsbase_fd.c ft_putubase_fd.c ft_atoull.c
LEFTOVERS		+=ft_atoul.c ft_atoui.c

FILENAMES		=$(addprefix memory/, $(MEMORY))
FILENAMES		+=$(addprefix list/, $(LIST))
FILENAMES		+=$(addprefix gnl/, $(GNL))
FILENAMES		+=$(addprefix leftovers/, $(LEFTOVERS))

SRC				=$(addprefix src/,$(FILENAMES))
BUILD			=$(addprefix build/, $(FILENAMES:.c=.o))
BUILDIR			=$(addprefix build/,$(SUBDIR))
CFLAGS			=-Wall -Wextra -Werror -I includes/
CC				= gcc

all: $(NAME)

$(NAME): $(SRC) | $(BUILD) 
	ar rcs $@ $(BUILD)

build/%.o: src/%.c | build
		$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf build/

fclean: clean
	rm -rf $(NAME)

re: fclean all

build:
	mkdir build/ $(BUILDIR)
