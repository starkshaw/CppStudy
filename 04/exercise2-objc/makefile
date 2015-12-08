UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
        CC = g++
endif
ifeq ($(UNAME), Darwin)
        CC = clang++
endif

all: exercise2

exercise2: exercise2.m complex.m
	$(CC) -Wall -framework Foundation exercise2.m complex.m -o exercise2
