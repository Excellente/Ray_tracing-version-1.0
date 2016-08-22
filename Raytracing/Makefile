# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emsimang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/07 16:42:46 by emsimang          #+#    #+#              #
#    Updated: 2016/08/22 10:33:00 by emsimang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
EXE = ray_tracing
FRAMEWORK = -lmlx -framework OpenGl -framework Appkit 
CFLAGS = -Wall -Werror -Wextra
SRCS = src/ray_tracer.c src/object_intersect.c src/vectors.c src/vector_transform.c src/fmin.c src/color.c
OBJS = $(SRC:.c=.o)

all:
	$(CC) $(SRCS) $(FRAMEWORK) -o $(EXE)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXE)

git_push: fclean
	git status
	git add *
	git status
	git commit -m "[norming files]: automated push"
	git push origin master

re: fclean all
