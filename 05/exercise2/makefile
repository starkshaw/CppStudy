UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = g++
endif
ifeq ($(UNAME), Darwin)
	CC = clang++
endif

all: driver

driver: vehicle.cpp driver.cpp truck.cpp taxi.cpp
	$(CC) vehicle.cpp driver.cpp truck.cpp taxi.cpp -o driver
