#include "Card.h"
#include <vector>

class Hand {
public:
	Hand();
	Hand(Card c1, Card c2);
	void add(Card c);
	int size();
	std::vector<Card> cards() const;
	int score() const;
	friend std::ostream& operator<<(std::ostream&, const Hand&);
private:
	std::vector<Card> crds;
};
