#VARS 

CLIENT_NAME = minitalk_c
SERVER_NAME = minitalk_s

SRCS_CLIENT =	./client.c
SRCS_SERVER = 	./server.c

#LIBS =	...ver/libft.a\

OBJS_C = $(patsubst %.c, %.o, $(SRCS_CLIENT))
OBJS_S = $(patsubst %.c, %.o, $(SRCS_SERVER))

FLAGS = -Wall -Wextra -Werror -g3

#RECIPES

all : $(CLIENT_NAME) $(SERVER_NAME)

$(CLIENT_NAME) : $(OBJS_C)
	cc $(OBJS_C) $(LIBS) $(FLAGS) -o $(CLIENT_NAME)

$(SERVER_NAME) : $(OBJS_S)
	cc $(OBJS_S) $(LIBS) $(FLAGS) -o $(SERVER_NAME)

%.o : %.c 
	cc $(FLAGS) -c $< -o $@  

clean :
	rm -f $(OBJS_C)
	rm -f $(OBJS_S)

fclean : clean
	rm -f $(OBJS_C) $(CLIENT_NAME)
	rm -f $(OBJS_S) $(SERVER_NAME)

re : fclean all

$(MAKE_LIBS) :
	make -C $(LIBFT_DIR)

.PHONY : all clean fclean re


# = variavel, atribuição
# Target = nome regra : dependencia - opcional
# Recipe = o que vai ser executado qdo e se a dependencia for encontrar
#PHONY ignora arquivos de mesmo nome na pasta, priorizando a regra do make
#-o output