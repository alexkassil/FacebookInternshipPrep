#include "Card.h"
#include "Deck.h"
#include <iostream>

int main()
{
	Deck d;
	for (int i = 0; i < d.size(); i++) {
		std::cout << d.cards()[i].toInt() << " " << d.cards()[i] << std::endl;
	}
}
