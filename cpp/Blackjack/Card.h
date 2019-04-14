#include <iostream>

enum Suit {Hearts, Clubs, Diamonds, Spades};
enum Rank {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};

class Card {
public:
	Card(Suit s, Rank r);
	Suit suit();
	Rank rank();
	int size();
	int toInt(); // Convert card to int, Ace of hearts -> 1, Ace of Clubs -> 14, King of Spades -> 52
	friend std::ostream& operator<<(std::ostream&, const Card&);
private:
	Suit su;
	Rank ra;
};
