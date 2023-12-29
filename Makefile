
# Makefile for simple polymorphism
#
# Iosif Vieru
#

CC = gcc
CFLAGS = -Wall

# Header files
HEADER := $(wildcard *.h)

# Source files
SOURCE := $(wildcard *.c)

# Object files
OBJ = $(SOURCE:.c=.o)

.DEFAULT_GOAL := main

main: $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o
	rm main
