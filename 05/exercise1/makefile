UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CXX = g++
endif
ifeq ($(UNAME), Darwin)
	CXX = clang++
endif

.PHONY: clean

all: driver

clean:
	rm driver

driver: car.cpp driver.cpp racecar.cpp
	$(CXX) car.cpp driver.cpp racecar.cpp -o driver
