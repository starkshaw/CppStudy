UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CXX = g++
endif
ifeq ($(UNAME), Darwin)
	CXX = clang++
endif

.PHONY: clean

all: exercise1 exercise2 exercise3

clean:
	rm exercise1
	rm exercise2
	rm exercise3

exercise1: exercise1.cpp die.cpp
	$(CXX) exercise1.cpp die.cpp -o exercise1

exercise2: exercise2.cpp complex.cpp
	$(CXX) exercise2.cpp complex.cpp -o exercise2
	
exercise3: exercise3.cpp complex.cpp
	$(CXX) exercise3.cpp complex.cpp -o exercise3