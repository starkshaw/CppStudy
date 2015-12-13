UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
        CXX = g++
endif
ifeq ($(UNAME), Darwin)
        CXX = clang++
endif

.PHONY: clean

all: exercise3

clean:
	rm exercise3

exercise3: exercise3.mm complex.mm
	$(CXX) -Wall -framework Foundation exercise3.mm complex.mm -o exercise3
