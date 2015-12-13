UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
        CC = gcc
endif
ifeq ($(UNAME), Darwin)
        CC = clang
endif

.PHONY: clean

all: exercise2

clean:
	rm exercise2

exercise2: exercise2.m complex.m
	$(CC) -Wall -framework Foundation exercise2.m complex.m -o exercise2
