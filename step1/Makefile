CC = gcc
all: board
clean: 
	rm -f *.o board
%.o: %.c
	$(CC) -c $< 
board: main.o board.o
	$(CC)  $^ -o $@