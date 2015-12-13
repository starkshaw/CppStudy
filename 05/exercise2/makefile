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

driver: vehicle.cpp driver.cpp truck.cpp taxi.cpp
	$(CXX) vehicle.cpp driver.cpp truck.cpp taxi.cpp -o driver
