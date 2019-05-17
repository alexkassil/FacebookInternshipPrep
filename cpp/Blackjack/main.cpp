#include "Card.h"
#include "Deck.h"
#include <iostream>

int main()
{
	Deck d;
	d.shuffle();

	std::cout << "Welcome to Blackjack" << std::endl;
	Card c1 = d.deal();
	Card c2 = d.deal();
	std::cout << "You have a " << c1 << " and a " << c2 << std::endl;
	std::cout << "Type h to hit, and s to stay" << std::endl;
}
