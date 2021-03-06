#ifndef CARD_H
#define CARD_H
#include <iostream>

enum Suit {Hearts, Clubs, Diamonds, Spades};
enum Rank {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};

class Card {
public:
	Card();
	Card(Suit s, Rank r);
	bool operator==(const Card& card) const;
	bool operator!=(const Card& card) const;
	Suit suit();
	Rank rank();
	int size();
	int score();
	int toInt() const; // Convert card to int, Ace of hearts -> 1, Ace of Clubs -> 14, King of Spades -> 52
	friend std::ostream& operator<<(std::ostream&, const Card&);
private:
	Suit su;
	Rank ra;
};

#endif
