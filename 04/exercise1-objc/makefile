UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = gcc
endif
ifeq ($(UNAME), Darwin)
	CC = clang
endif

.PHONY: clean

all: exercise1

clean:
	rm exercise1

exercise1: exercise1.m die.m
	$(CC) -Wall -framework Foundation exercise1.m die.m -o exercise1
