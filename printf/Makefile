# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 14:19:47 by yonuma            #+#    #+#              #
#    Updated: 2024/05/02 19:06:11 by yonuma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFRAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c \
	   ft_utils.c \
	   print_unsigned_int.c \
	   return_chr.c \
	   return_int.c \
	   return_percent.c \
	   return_pointer.c \
	   return_str.c \
	   return_ten.c \
	   print_unsigned_int.c \
	   return_base_small.c 
	   
# BONUS = 
	   
OBJS = $(SRCS:.c=.o)
OBJS_B = $(BONUS:.c=.o)
INCLUDES = -I includes

all : $(NAME)

# bonus : 
# 	@make all "OBJS = $(OBJS) $(OBJS_B)"

$(NAME) : $(OBJS) $(ONJS_B)
	ar rc $@ $^

%.o:%.c
	$(CC) -c $(CFLAGS) $^ -o $@ $(INCLUDES)

clean : 
	rm -f $(OBJS) $(OBJS_B)

fclean : clean
	rm -f $(NAME)

re : fclean all
.PHONY : all clean fclean red
