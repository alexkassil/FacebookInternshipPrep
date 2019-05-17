#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include <iostream>

int main()
{
	Deck d;
	d.shuffle();
	char c = 'h';
	Hand h;
	int score;
	
	h.add(d.deal());
	std::cout << "Welcome to Blackjack" << std::endl;

	while (c != 's') {
		h.add(d.deal());
		std::cout << h << std::endl;
		
		score = h.score();
		if (score == 21) {
			std::cout << "You win!!!!" << std::endl;
			break;
		} else if (score > 21) {
			std::cout << "Bust! You lose." << std::endl;
			break;
		}

		std::cout << "Type h to hit, and s to stay" << std::endl;
		std::cin >> c;
	} 
}
