# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 16:38:26 by mwingrov          #+#    #+#              #
#    Updated: 2018/10/25 12:07:32 by mwingrov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Bomberman

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)

CXX := clang++
CXXFLAGS := -Wall -Werror -Wextra -lGLFW -L ~/lib -I include/ -L ~/.brew/lib/ -I ~/.brew/include/

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@
	@echo [INFO] $@ "compiled successfully."

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re: fclean all

run: all clean fclean re