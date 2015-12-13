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

driver: driver.cpp parkinglot.cpp taxi.cpp truck.cpp vehicle.cpp
	$(CXX) driver.cpp parkinglot.cpp taxi.cpp truck.cpp vehicle.cpp -o driver