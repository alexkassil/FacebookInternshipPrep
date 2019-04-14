CC=g++
CFLAGS=-std=c++14

.DEFAULT_GOAL := main

test: Card.cpp Card.h test.cpp
	@$(CC) $(CFLAGS) -o test Card.cpp Card.h test.cpp -isystem catch2
	@./test

main:
	@$(CC) $(CFLAGS) -o game Card.cpp Card.h main.cpp
	@./game


