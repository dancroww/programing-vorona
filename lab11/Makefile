CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
TEST_DIR = test

EXECUTABLE = $(BIN_DIR)/main.bin
TEST_EXECUTABLE = $(BIN_DIR)/test.bin

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

.PHONY: all clean test

all: $(EXECUTABLE)

test: $(TEST_EXECUTABLE)
	@./$(TEST_EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES) | $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) $(BIN_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

$(TEST_EXECUTABLE): $(TEST_DIR)/test.c $(SRC_DIR)/lib.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) $^ -o $@
