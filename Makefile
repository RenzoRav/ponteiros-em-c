CC=gcc
CFLAGS=-Wall -Wextra -std=c11 -O2
BIN=bin/app
SRC=src/main.c


all: $(BIN)


$(BIN): $(SRC)
@mkdir -p bin
$(CC) $(CFLAGS) -o $(BIN) $(SRC)


run: all
./$(BIN)


clean:
rm -rf bin *.o