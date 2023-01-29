CC = gcc 
#CFLAGS = "-Werror"
SRC = main.c
SRC += fib.c
BIN = fibNumber

fibLinux: 
	$(CC) -o $(BIN) $(SRC) $(CFLAGS)

clean:
	rm -rf $(BIN)
