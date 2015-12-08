UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = gcc
endif
ifeq ($(UNAME), Darwin)
	CC = clang
endif

all: driver

driver: vehicle.m driver.m truck.m taxi.m
	$(CC) -Wall -framework Foundation vehicle.m driver.m truck.m taxi.m -o driver
