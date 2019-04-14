#include "Card.h"
#include <iostream>

int main()
{
	Card c(Suit::Hearts, Rank::Ace);
	std::cout << c;
}
