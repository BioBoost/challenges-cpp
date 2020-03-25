# The compiler to use
CC=g++

# Compiler flags
CFLAGS=-c -Wall -std=c++11

# Name of executable output
EXECUTABLE=make_me

all: $(EXECUTABLE)

# The executable depends on all the separate object files
$(EXECUTABLE): main.o
	$(CC) main.o -o $(EXECUTABLE)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -f *.o $(EXECUTABLE)