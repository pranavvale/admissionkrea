CC = g++
CFLAGS = -Wall -g

main.exe: main.o student.o
	$(CC) $(CFLAGS) -o main.exe main.o student.o

main.o: main.cpp student.cpp student.h
	$(CC) $(CFLAGS) -c main.cpp

student.o: student.h