# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Tamather <Tamather@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 08:34:58 by tamather          #+#    #+#              #
#    Updated: 2021/10/20 21:07:57 by Tamather         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c push.c rotate.c rrotate.c swap.c simple_sort.c parsing.c utils.c sort.c utils2.c
SRCDIR = srcs
OBJS_DIR = objs
DEPS_DIR = deps
CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
LIB = -Llibft -lft
OBJS := $(SRCS:%.c=$(OBJS_DIR)/%.o)
I = -I./libft -I./minilibx-linux -I./inc
DFLAGS= -MP -MMD -MF $(DEPS_DIR)/$*.d -MT '$@'
DEPS = $(SRCS:%.c=$(DEPS_DIR)/%.d)

all: $(NAME)

$(OBJS_DIR):
			@mkdir $@

$(DEPS_DIR):
			@mkdir $@

$(OBJS_DIR)/%.o: $(SRCDIR)/%.c | $(OBJS_DIR) $(DEPS_DIR)
			$(CC) $(I) $(CFLAGS) $(DFLAGS) -c $< -o $@


$(NAME): $(OBJS)
			@make -C libft
			$(CC) $(CFLAGS) $^ -o $(NAME) $(LIB)

clean:
			@rm -rf $(OBJS_DIR)
			@rm -rf $(DEPS_DIR)
			@make -C libft clean

fclean:	clean
			@rm -f  $(NAME)
			@make -C libft fclean

re: fclean all

-include $(DEPS)

.PHONY:	clean re fclean all