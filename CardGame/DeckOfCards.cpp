
#include <iostream>
#include "Card.h"
#include "DeckofCards.h"
#include <array>
#include <stdexcept>
#include <random>
#include <ctime>
#include <vector>

using namespace std; 

DeckOfCards::DeckOfCards()
{

	deck = cardDeck;
	currentCard = 0; 
}

Card DeckOfCards::getCard(int myCardIndice)
{
	if (myCardIndice >= 0 && myCardIndice <= 51)
	{
		return deck[myCardIndice];
	}
	else
	{
		cout << "Enter a number between 0 and 51." << endl; 
	}
}

void DeckOfCards::printDeck()
{
	for (int i = 0; i < 52; i++)
	{
		Card myCard = deck[i]; 

		cout << myCard.toString() << endl; 
	}
}
void DeckOfCards::shuffleDeck()
{
	default_random_engine shuffleEngine (static_cast < unsigned int >(time(0)));
	uniform_int_distribution<unsigned int> randomInt(0, 51); 

	currentCard = 0; 
	int tempHold = 0; 


	for (int i = 0; i < 52; i++)
	{
		int myCardPosition = randomInt(shuffleEngine); 
		 
		//Getting the cards to be swapped 
		Card card1 = deck[i]; 
		Card card2 = deck[myCardPosition]; 

		//Swapping cards 
		deck[myCardPosition] = card1; 
		deck[i] = card2; 

	}
}

Card DeckOfCards::dealCard()
{
	bool cardsLeft = true; 

	while (cardsLeft == true)
	{
		Card myCard = deck[currentCard];
		cout << myCard.toString() << "\n";
		currentCard++;
		return myCard;
	}

}



bool DeckOfCards::moreCards()
{
	//Check to see if the max number of cards have been reached 
	//If it has there are no more cards and false is returned 
	if (currentCard < 51)
	{
		return true; 
	}
	else
	{
		return false; 
	}
}


	

/*  What did I do wrong when trying to initalize this in constructor? 
	
	deck = new Card[52]; 

	for (int i = 0; i < 3; i++)
	{

		Card myCard = Card(i,i); 
		deck[i] = myCard; 

	}

} */
