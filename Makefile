all: bin/myapp

INCLUDE=./include/
CC=g++
CFLAGS=-g

vpath % ./bin
vpath %.h ./include
vpath %.o ./obj
vpath %.cpp ./src

bin/myapp: obj/controlls.o obj/human.o obj/LoadPlan.o obj/main.o
	$(CC) $(CFLAGS) -o $@ -I$(INCLUDE) obj/controlls.o obj/main.o -lcppunit

obj/controlls.o: src/controlls.cpp controlls.h
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/controlls.cpp

#obj/nwchuman.o: src/nwchuman.cpp
	#$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/nwchuman.cpp

obj/LoadPlan.o: src/LoadPlan.cpp LoadPlan.h
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/LoadPlan.cpp

obj/human.o: src/human.cpp human.h
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) src/human.cpp

obj/main.o: src/main.cc
	$(CC) $(CFLAGS) -o $@ -c -I$(INCLUDE) -lcppunit src/main.cc

clean:
	rm ./obj/*
	rm ./bin/*
