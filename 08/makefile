NAME := $(shell uname)
STD = --std=c++11

ifeq ($(UNAME), Linux)
	CXX = g++
endif
ifeq ($(UNAME), Darwin)
	CXX = clang++
endif

.PHONY: clean

all: Strategy

clean:
	rm strategy

Strategy: Strategy
	$(CXX) $(STD) Strategy.cpp -o strategy