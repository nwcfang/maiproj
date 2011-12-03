all: bin/myapp

INCLUDE=./include/
CC=g++
CFLAGS=-g

vpath % ./bin
vpath %.h ./include
vpath %.o ./obj
vpath %.cpp ./src

bin/myapp:   obj/human.o obj/controlls.o obj/main.o
	$(CC) $(CFLAGS) -o $@ -I$(INCLUDE) obj/human.o obj/controlls.o obj/main.o

obj/controlls.o: src/controlls.cpp
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/controlls.cpp

obj/human.o: src/human.cpp
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/human.cpp

obj/main.o: src/main.cc
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/main.cc

clean:
	rm ./obj/*
	rm ./bin/*
