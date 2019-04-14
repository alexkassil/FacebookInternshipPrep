#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch2/catch.hpp"
#include "Card.h"

TEST_CASE( "Initialized Card has right attributes", "[card]" ) {
	Card c(Suit::Hearts, Rank::Ace);
	CHECK(c.suit() == Suit::Hearts);
	CHECK(c.rank() == Rank::Ace);
}

TEST_CASE( "Card displays the write thing when called with <<", "[card]" ) {
	Card c(Suit::Hearts, Rank::Ace);
	std::stringstream buffer;
	buffer << c;
	CHECK(buffer.str() == "Ace of Hearts");
}
TEST_CASE( "Check toInt", "[card]" ) {
	Card c1(Suit::Hearts, Rank::Ace);
	Card c2(Suit::Clubs, Rank::Ace);
	Card c3(Suit::Spades, Rank::King);
	CHECK(c1.toInt() == 1);
	CHECK(c2.toInt() == 14);
	CHECK(c3.toInt() == 52);
}

TEST_CASE( "Deck initialized has all 52 cards", "[deck]") {
	
}

TEST_CASE( "Deck deal two different cards", "[deck]") {
	
}

TEST_CASE( "Deck deal all the cards cards", "[deck]") {
	
}
