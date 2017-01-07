#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include <string>
#include "Card.h"


static Card cardDeck[52] = { Card{0,0},Card{0,1}, Card{0,2}, Card{0,3}, Card{1,0}, Card{1,1},
Card{1,2}, Card{1,3}, Card{2,0}, Card{2,1}, Card{2,2}, Card{2,3}, Card{3,0}, Card{3,1}, Card{3,2}, Card{3,3},
Card{4,0}, Card{4,1}, Card{4,2}, Card{4,3}, Card{5,0}, Card{5,1}, Card{5,2}, Card{5,3}, Card{6,0}, Card{6,1},
Card{6,2}, Card{6,3}, Card{7,0}, Card{7,1}, Card{7,2}, Card{7,3}, Card{8,0}, Card{8,1}, Card{8,2}, Card{8,3},
Card{9,0}, Card{9,1}, Card{9,2}, Card{9,3}, Card{10,0}, Card{10,1}, Card{10,2}, Card{10,3}, Card{11,0},Card{11,1},
Card{11,2}, Card{11,3}, Card{12,0}, Card{12,1}, Card{12,2}, Card{12,3} };

class DeckOfCards
{
public: 
	DeckOfCards(); //Default constructor for deck of cards. Only initializes the array 
	Card getCard(int); //return any card in the deck based on it's position in array 
	void shuffleDeck(); //shuffle all cards in deck array 
	Card dealCard(); //deal a card 
	void printDeck(); //Print all cards in deck
	bool moreCards(); //Check to see if all cards have been dealt 
	//std::vector<Card> dealHand(); //Deal a full hand of cards 

private: 
	Card *deck; //Pointer to my deck of cards array 
	int currentCard; 
};
#endif
