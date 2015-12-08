UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = gcc
endif
ifeq ($(UNAME), Darwin)
	CC = clang
endif

all: driver

driver: driver.m parkinglot.m taxi.m truck.m vehicle.m
	$(CC) -Wall -framework Foundation driver.m parkinglot.m taxi.m truck.m vehicle.m -o driver