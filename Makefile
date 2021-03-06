# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeeyien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/11 11:08:07 by sdeeyien          #+#    #+#              #
#    Updated: 2022/07/15 00:02:20 by sdeeyien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
DEPS = libft.h


SRC = ./ft_isalpha.c \
      ./ft_isdigit.c \
      ./ft_isalnum.c \
      ./ft_isascii.c \
      ./ft_toupper.c \
      ./ft_tolower.c \
      ./ft_isprint.c \
      ./ft_strlen.c \
      ./ft_memset.c \
      ./ft_bzero.c \
      ./ft_memcpy.c \
      ./ft_memmove.c \
      ./ft_strlcpy.c \
      ./ft_strlcat.c \
      ./ft_strchr.c \
      ./ft_strrchr.c \
      ./ft_strncmp.c \
      ./ft_memchr.c \
      ./ft_memcmp.c \
      ./ft_strdup.c \
      ./ft_calloc.c \
      ./ft_strnstr.c \
      ./ft_atoi.c \
      ./ft_substr.c \
      ./ft_strjoin.c \
      ./ft_strtrim.c \
      ./ft_split.c \
      ./ft_itoa.c \
      ./ft_strmapi.c \
      ./ft_striteri.c \
      ./ft_putchar_fd.c \
      ./ft_putstr_fd.c \
      ./ft_putendl_fd.c \
      ./ft_putnbr_fd.c

BONUS_SRC = ./ft_lstnew.c \
	    ./ft_lstadd_front.c \
	    ./ft_lstsize.c \
	    ./ft_lstlast.c \
	    ./ft_lstadd_back.c \
	    ./ft_lstdelone.c \
	    ./ft_lstclear.c \
	    ./ft_lstiter.c \
	    ./ft_lstmap.c


OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
NAME = libft.a
$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)

all : $(NAME)

bonus : $(BONUS_OBJ)
	ar -crs $(NAME) $(BONUS_OBJ)

<<<<<<< HEAD
so :
	$(CC) -fPIC $(CFLAGS) $(SRC) $(BONUS_SRC)
	gcc -shared -o libft.so $(OBJ) $(BONUS_OBJ)

clean :
	rm -f $(OBJ) $(BONUS_OBJ) libft.so
=======
clean : 
	rm -f $(OBJ) $(BONUS_OBJ)
>>>>>>> 470585abbb1223bbc02a33f956d954148d8dd6c1

fclean : clean
	rm -f $(NAME)

re : fclean all

%.o : %.c
	$(CC) -c $(CFLAGS)  $< 

.PHONY: all clean fclean re
