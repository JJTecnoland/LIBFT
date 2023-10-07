# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 10:04:53 by jlunar-a          #+#    #+#              #
#    Updated: 2023/10/06 13:05:56 by jlunar-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SOURCES := $(wildcard *.c)

OBJS := $(SOURCES:.c=.o)

CFLAGS := -Wall -Wextra -Werror  

all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
    
re: fclean all

.PHONY: all clean fclean re install uninstall

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
