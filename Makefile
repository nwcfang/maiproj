all: bin/myapp

INCLUDE=./include/
CC=g++
CFLAGS=-g

vpath % ./bin
vpath %.h ./include
vpath %.o ./obj
vpath %.cpp ./src

bin/myapp: obj/controlls.o obj/main.o
	$(CC) $(CFLAGS) -o $@ -I$(INCLUDE) obj/controlls.o obj/main.o

obj/controlls.o: src/controlls.cpp controlls.h
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/controlls.cpp

#obj/nwchuman.o: src/nwchuman.cpp
	#$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/nwchuman.cpp

obj/main.o: src/main.cc
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/main.cc

clean:
	rm ./obj/*
	rm ./bin/*
