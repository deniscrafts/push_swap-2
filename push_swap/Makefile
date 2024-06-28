# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: denrodri <denrodri@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 20:20:42 by denrodri          #+#    #+#              #
#    Updated: 2024/06/28 16:40:50 by denrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
ARCHIVE = push_swap.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
CFLAGS = -Wall -Werror -Wextra -g -O2 

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all : $(NAME) $(ARCHIVE)

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(ARCHIVE) : $(OBJS)
	ar rcs $(ARCHIVE) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)
	
%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

bonus : 
	cd ../checker && make
	
clean :
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean : clean
	@rm -f $(NAME) $(ARCHIVE) a.out
	@cd ../checker && make fclean
	@make -C $(LIBFT_DIR) fclean

re : fclean all

.PHONY : all clean fclean re bonus
