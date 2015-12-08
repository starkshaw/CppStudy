UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = g++
endif
ifeq ($(UNAME), Darwin)
	CC = clang++
endif

all: driver

driver: driver.cpp parkinglot.cpp taxi.cpp truck.cpp vehicle.cpp
	$(CC) driver.cpp parkinglot.cpp taxi.cpp truck.cpp vehicle.cpp -o driver