#variables
CC = gcc
CFLUGS = -std=c99 -pedantic -Wall -ansi
TARGET = program

#target and rules
all: $(TARGET)

#
$(TARGET): main.o functions.o
	$(CC) $(CFLUGS) -o $@ $^ 

main.o: main.c functions.h
    $(CC) $(CFLAGS) -c -o $@ $<

functions.o: functions.c functions.h
    $(CC) $(CFLAGS) -c -o $@ $< 

clean:
    rm -f *.o $(TARGET)

