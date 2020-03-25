# The compiler to use
CC=g++

# Compiler flags
CFLAGS=-c -Wall -std=c++11

# Name of executable output
EXECUTABLE=stats

all: $(EXECUTABLE)

# The executable depends on all the separate object files
$(EXECUTABLE): main.o serie.o
	$(CC) main.o serie.o -o $(EXECUTABLE)

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp

serie.o: lib/serie.cpp
	$(CC) $(CFLAGS) lib/serie.cpp

clean:
	rm -f *.o $(EXECUTABLE)