# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 10:04:53 by jlunar-a          #+#    #+#              #
#    Updated: 2023/10/20 13:28:26 by jlunar-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SOURCES := $(wildcard *.c)

OBJS := $(SOURCES:.c=.o)

BONUS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
			ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS	= $(BONUS:.c=.o)

CFLAGS := -Wall -Wextra -Werror  

all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
PREFIX=/usr/local

install: $(NAME)
	cp -f $(NAME) $(PREFIX)/lib  
	@echo "Installed!"

uninstall:
	rm -f $(PREFIX)/lib/$(NAME)
	@echo "Uninstalled!"

# make install PREFIX=/opt sirve para instalar en /opt/lib
# con make install y se instala en /usr/local/lib
# se desinstala con make uninstall y se desinstala de /usr/local/lib
