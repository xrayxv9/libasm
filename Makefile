NAME = libasm.a

NASM = nasm
CNAME = gcc
EXEC_NAME = libasm

FLAGS = -f elf64 -g
CFLAGS = -g -Wall -Werror -Wextra

SRC_MAIN = main.c

SRC = ft_strlen.s \
	  ft_strcpy.s \
	  ft_strcmp.s \
	  ft_write.s \
	  ft_read.s \
	  ft_strdup.s \

SRC_BONUS = ft_atoi_base.s \
			ft_lst_create.s \
			ft_list_push_front.s \
			ft_list_size.s \
			ft_list_sort.s \
			ft_list_remove_if.s \


OBJ_PATH = obj/

OBJ_SRC = $(SRC:.s=.o)
OBJ_BONUS = $(SRC_BONUS:.s=.o)
OBJ_SRC_MAIN = $(SRC_MAIN:.c=.o)

OBJS_SRC = $(addprefix $(OBJ_PATH), $(OBJ_SRC))
OBJS_BONUS = $(addprefix $(OBJ_PATH), $(OBJ_BONUS))
OBJS_SRC_MAIN = $(addprefix $(OBJ_PATH), $(OBJ_SRC_MAIN))

all: $(NAME)

$(NAME): $(OBJS_SRC) $(OBJS_SRC_MAIN)
	ar -rcs $(NAME) $(OBJS_SRC)	
	gcc -o $(EXEC_NAME) $(OBJS_SRC_MAIN) $(NAME)

$(OBJ_PATH)%.o:%.s
	mkdir -p $(OBJ_PATH)
	$(NASM) $(FLAGS) -o $@ $<

$(OBJ_PATH)%.o:%.c
	mkdir -p $(OBJ_PATH)
	$(CNAME) $(CFLAGS) -c -o $@ $<

clean: 
	rm -fr $(OBJ_PATH)

fclean: clean
	rm -fr $(NAME)
	rm -fr $(EXEC_NAME)

bonus: $(OBJS_SRC) $(OBJS_BONUS) $(OBJS_SRC_MAIN)
	ar -rcs $(NAME) $(OBJS_SRC) $(OBJS_BONUS)
	gcc -o libasm $(OBJS_SRC_MAIN) $(NAME)
	
re : fclean all

.PHONY: all fclean clean re

