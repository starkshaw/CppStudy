UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = g++
endif
ifeq ($(UNAME), Darwin)
	CC = clang++
endif

all: exercise1 exercise2 exercise3

exercise1: exercise1.cpp die.cpp
	$(CC) exercise1.cpp die.cpp -o exercise1

exercise2: exercise2.cpp complex.cpp
	$(CC) exercise2.cpp complex.cpp -o exercise2
	
exercise3: exercise3.cpp complex.cpp
	$(CC) exercise3.cpp complex.cpp -o exercise3