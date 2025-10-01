INC_DIR :=inc
BIN_DIR :=bin
OBJ_DIR :=obj
SRC_DIR :=src

CC := gcc
CFLAGS := -g -Wall -std=c99 -pedantic -I $(INC_DIR)
LFLAG := -g

TARGET := $(BIN_DIR)/main.exe
OBJS := main.o other.o
RM := -rm -f

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CC) $(LFAG) $(OBJS) -o $(TARGET)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

other.o: $(INC_DIR)/other.h other.c
	$(CC) $(CFLAGS) -c other.c -o other.o

$(BIN_DIR):
	mkdir $(BIN_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	$(RM) $(OBJS)
