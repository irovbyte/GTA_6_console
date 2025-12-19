CC = gcc
CFLAGS = -Wall -Iinclude

SRC = src/main.c src/welcome.c
OBJ = $(SRC:.c=.o)

BUILD_DIR = build
TARGET = $(BUILD_DIR)/game

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)