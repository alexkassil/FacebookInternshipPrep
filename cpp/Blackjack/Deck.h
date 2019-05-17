#include <ctime>
#include "Card.h"

class Deck {
public:
	Deck();
	int size();
	Card* cards();
	Card deal();
	void shuffle();
	Card* begin();
	Card* end();
private:
	Card* crds;
	int ptr;
	int sz;
};
