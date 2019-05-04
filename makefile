CC = gcc
CFLAGS = -Wall 
TARGET = scanner 
OBJ = main.o testScanner.o scanner.o
SRC = main.c testScanner.c scanner.c

all: $(TARGET) 
	
$(TARGET):$(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	/bin/rm -f *.o $(TARGET) 
