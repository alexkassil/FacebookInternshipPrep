#include "Hand.h"
#include "Card.h"
#include <iostream>

Hand::Hand() :crds{0} {
}

Hand::Hand(Card c1, Card c2) {
	add(c1);
	add(c2);
}

void Hand::add(Card c) {
	crds.push_back(c);
}

std::vector<Card> Hand::cards() const {
	return crds;
}

int Hand::size() {
	return crds.size();
}

int Hand::score() const {
	int score = 0;
	for (Card c : crds) {
		score += c.score();
	}
	return score;
}

std::ostream& operator<<(std::ostream &stream, const Hand &h) {
	stream << "Your hand contains ";
	for (Card c : h.cards()) {
		stream << c << " ";
	}
	stream << "and your hand score is " << h.score();
	return stream;
}
