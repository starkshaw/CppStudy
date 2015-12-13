UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	CC = gcc
endif
ifeq ($(UNAME), Darwin)
	CC = clang
endif

.PHONY: clean

all: driver

clean:
	rm driver

driver: car.m driver.m racecar.m
	$(CC) -Wall -framework Foundation car.m driver.m racecar.m -o driver
