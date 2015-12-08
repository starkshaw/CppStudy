UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = g++
endif
ifeq ($(UNAME), Darwin)
	CC = clang++
endif

all: driver

driver: car.cpp driver.cpp racecar.cpp
	$(CC) car.cpp driver.cpp racecar.cpp -o driver
