SRC=		$(wildcard ./src/*.cpp)

NAME=	 pkmnBattleSim

XX=		g++

OBJ=		$(SRC:.cpp=.o)

CXXFLAGS=	-g -W -Wall -Wextra -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

INC=		-I../

all:		$(NAME)

$(NAME):	$(OBJ)
		$(XX) -o $(NAME) $(OBJ) $(INC) $(CXXFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

.cpp.o:
		@$(XX) -c $< -o $@ $(INC) $(CXXFLAGS)
