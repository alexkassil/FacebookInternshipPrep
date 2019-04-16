#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch2/catch.hpp"
#include "Card.h"
#include "Deck.h"

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
	Deck d;
	CHECK(d.size() == 52);
	std::set<int> setOfNumbers;
	Card* cards = d.cards();
	int val;
	for (int i = 0; i < 52; ++i) {
		val = cards[i].toInt();
		CHECK(setOfNumbers.count(val) == 0);
		setOfNumbers.insert(val);
	}
	for (int i = 1; i <= 52; ++i) {
		CHECK(setOfNumbers.count(i) == 1);
	}
}

TEST_CASE( "Deck deal two different cards", "[deck]") {
	Deck d;
	Card c1 = d.deal();
	Card c2 = d.deal();
	CHECK(c1.toInt() != c2.toInt());
}

TEST_CASE( "Deck has all 52 cards post shuffle", "[deck]") {
	Deck d;
	d.shuffle();
	std::set<int> setOfNumbers;
	Card* cards = d.cards();
	int val;
	for (int i = 0; i < 52; ++i) {
		val = cards[i].toInt();
		CHECK(setOfNumbers.count(val) == 0);
		setOfNumbers.insert(val);
	}
	for (int i = 1; i <= 52; ++i) {
		CHECK(setOfNumbers.count(i) == 1);
	}
}

TEST_CASE( "Shuffling decks makes a difference", "[deck]") {
	Deck d1;
	Deck d2;
	d1.shuffle();
	d2.shuffle();
	bool match = true;
	for (int i = 0; i < 52; ++i) {
		match = match && (d1.cards()[i].toInt() == d2.cards()[i].toInt());
	}
	CHECK_FALSE(match);
}
