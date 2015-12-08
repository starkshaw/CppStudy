UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
        CC = g++
endif
ifeq ($(UNAME), Darwin)
        CC = clang++
endif

all: exercise3

exercise3: exercise3.mm complex.mm
	$(CC) -Wall -framework Foundation exercise3.mm complex.mm -o exercise3
