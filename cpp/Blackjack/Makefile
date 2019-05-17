CC=g++
CFLAGS=-std=c++17
CPPS := Card.cpp Deck.cpp Hand.cpp
HS := Card.h Deck.h Hand.h
.DEFAULT_GOAL := main

test: test.cpp $(CPPS) $(HS)
	@rm -f test
	@$(CC) $(CFLAGS) -o test $(CPPS) $(HS) test.cpp -isystem catch2
	@./test

main: Card.cpp Card.h main.cpp
	@rm -f game
	@$(CC) $(CFLAGS) -o game $(CPPS) $(HS) main.cpp
	@./game

clean:
	@rm -f test
	@rm -f game
