#include "Card.h"
#include "Deck.h"

/*class Deck {
public:
	Deck();
	int size();
	Card* cards();
	Card deal();
	void shuffle();
private:
	Card* crds;
	int ptr;
	const int sz;
	};*/

Deck::Deck() :crds{new Card[52]}, sz{52}, ptr{0} {
	int i = 0;
	for (int suitInt = Suit::Hearts; suitInt <= Suit::Spades; ++suitInt) {
		for (int rankInt = Rank::Ace; rankInt <= Rank::King; ++rankInt) {
			crds[i++] = Card(static_cast<Suit>(suitInt), static_cast<Rank>(rankInt));
		}
	}
}

int Deck::size() {
	return sz;
}

Card* Deck::cards() {
	return crds;
}

Card Deck::deal() {
	return crds[ptr++];
}

void Deck::shuffle() {
	ptr = 0;
}
