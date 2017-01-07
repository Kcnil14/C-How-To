#include <iostream>
#include <string>
#include "Card.h"
#include "DeckOfCards.h"
#include <vector>
using namespace std; 

int main()
{

	//Creating deck of cards object 
	DeckOfCards myDeck; 
	
	//Shuffling the deck 
	myDeck.shuffleDeck(); 
	
	//Dealing the hand
	vector<Card>myHand; 

	cout << "Dealing your hand. \n"; 
	for (int i = 0; i < 5; i++)
	{
		Card currentCard = myDeck.dealCard(); 
		myHand.push_back(currentCard); 
	}

	/*WORKS FOR GETTING THE FACE FROM VECTOR 
	Card aCard = myHand[0]; 
	int thisThing = aCard.getFace(); 
	cout << thisThing; 

}
