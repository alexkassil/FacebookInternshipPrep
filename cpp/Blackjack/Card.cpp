#include "Card.h"
#include <iostream>

const char* SuitStrings[] = {"Hearts", "Clubs", "Diamonds", "Spades"};
const char* RankStrings[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

Card::Card() = default;

Card::Card(Suit s, Rank r) :su{s}, ra{r} {
}

Suit Card::suit() {
	return su;
}

Rank Card::rank() {
	return ra;
}

int Card::toInt() {
	int s = static_cast<int>(su);
	int r = static_cast<int>(ra);
	return s * 13 + r + 1;
}

std::ostream& operator<<(std::ostream &stream, const Card &c) {
	int s = static_cast<int>(c.su);
	int r = static_cast<int>(c.ra);
	stream << RankStrings[r] << " of " << SuitStrings[s];
	return stream;
}

