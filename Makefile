INC_DIR :=inc
BIN_DIR :=bin
OBJ_DIR :=obj
SRC_DIR :=src

CC := gcc
CFLAGS := -g -Wall -std=c99 -pedantic -I $(INC_DIR)
LFLAG := -g

TARGET := $(BIN_DIR)/main.exe
SRCS := $(SRC_DIR)/main.c
OBJS := $(OBJ_DIR)/main.o
RM := -rm -f

.PHONY: all clean

all: $(BIN_DIR) $(OBJ_DIR) $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LFLAG) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/math_ops.o: $(SRC_DIR)/math_ops.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/math_ops.c -o $(OBJ_DIR)/math_ops.o

$(BIN_DIR):
	mkdir $(BIN_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	$(RM) $(OBJS) $(TARGET)
