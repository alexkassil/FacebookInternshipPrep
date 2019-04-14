#include "Card.h"

class Deck {
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
};
