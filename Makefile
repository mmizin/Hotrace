#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alukyane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 22:31:54 by alukyane          #+#    #+#              #
#    Updated: 2018/03/25 23:31:04 by obamzuro         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = hotrace
SRCS = 	main.c 																	\
		ft_bzero.c 																\
		ft_lstnew.c 															\
		ft_memccpy.c 															\
		ft_memcpy.c 															\
		ft_memdel.c 															\
		ft_memmove.c 															\
		ft_memset.c 															\
		ft_strchr.c 															\
		ft_strclr.c 															\
		ft_strdup.c 															\
		ft_strjoin.c 															\
		ft_strlen.c 															\
		ft_strncat.c 															\
		ft_strnew.c ft_strrchr.c ft_strsub.c 									\
		get_next_line.c 														\
		my_ft_setyourchar.c 													\
		hot.c																	\
		hot_plus.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)

%.o:%.c
	gcc -o $@ -c $<

$(NAME): $(OBJS)
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
