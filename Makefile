# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorge <jorge@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 20:26:43 by jduque-p          #+#    #+#              #
#    Updated: 2021/08/18 21:10:11 by jorge            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC = cc

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c\
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_toupper.c\
	ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
	ft_substr.c ft_tolower.c ft_split.c ft_itoa.c ft_putchar_fd.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

SRC_B = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c\
		ft_lstlast.c ft_lstnew.c ft_lstsize.c\
	
OBJS = $(SRC:.c=.o)

OBJS_B = $(SRC_B:.c=.o)

HEADER = libft.h

all: $(NAME)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS_B)
	ar rcs $(NAME) $(OBJS_B)

$(OBJS_B): $(SRC_B)
	$(CC) $(CFLAGS) -c $(SRC_B)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all bonus clean fclean re
