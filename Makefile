#VARS 
NAME = minitalk

CLIENT_NAME = client_minitalk
SERVER_NAME = server_minitalk

SRCS_CLIENT =	./client.c
SRCS_SERVER = 	./server.c

LIBS =	./libft/libft.a

OBJS_C = $(patsubst %.c, %.o, $(SRCS_CLIENT))
OBJS_S = $(patsubst %.c, %.o, $(SRCS_SERVER))

FLAGS = -Wall -Wextra -Werror -g3

#RECIPES

all : $(NAME)

$(NAME): $(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME): $(SRCS_SERVER)
		make -C libft
		cc $(SRCS_SERVER) $(LIBS) $(FLAGS) -o $(SERVER_NAME)
		@echo "\033[44mSERVER UP\033[0m"

$(CLIENT_NAME): $(SRCS_CLIENT)
		make -C libft
		cc $(SRCS_CLIENT) $(LIBS) $(FLAGS) -o $(CLIENT_NAME)
		 @echo "\033[45mCLIENT LISTENING\033[0m"

%.o : %.c 
	cc $(FLAGS) -c $< -o $@  

clean :
	rm -f $(OBJS_C)
	rm -f $(OBJS_S)
	@make -s -C libft clean
	@echo "\033[36mCLEAN? OK!\033[0m"

fclean : clean
	rm -f $(OBJS_C) $(CLIENT_NAME)
	rm -f $(OBJS_S) $(SERVER_NAME)
	@make -s -C libft fclean
	@echo "\033[33mFCLEAN? DONE!\033[0m"

re : fclean all

.PHONY : all clean fclean re

# = variavel, atribuição
# Target = nome regra : dependencia - opcional
# Recipe = o que vai ser executado qdo e se a dependencia for encontrar
#PHONY ignora arquivos de mesmo nome na pasta, priorizando a regra do make
#-o output