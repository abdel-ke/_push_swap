OBJ_DIR = ./kamal
DIR_TEST = hamid
SRCS = test.c
OBJ = $(addprefix $(OBJ_DIR)/$(DIR_TEST)/,$(SRCS:.c=.o))

all: $(OBJ)

$(OBJ):
	mkdir -p $(dir $@)
	touch $(OBJ_DIR)/test
	gcc -c test.c -o $@