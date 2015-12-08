UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = g++
endif
ifeq ($(UNAME), Darwin)
	CC = clang++
endif

all: exercise1

exercise1: exercise1.m die.m
	$(CC) -Wall -framework Foundation exercise1.m die.m -o exercise1
