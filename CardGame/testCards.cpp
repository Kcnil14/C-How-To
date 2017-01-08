#include <iostream>
#include <string>
#include "Card.h"
#include "DeckOfCards.h"
#include <vector>
using namespace std; 


void determineHand(vector<Card>&); 

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
	cout << thisThing; */

	determineHand(myHand); 
	
	/*vector<int> testVector = { 0,0,0 }; 
	int thisOne = testVector[0]; 
	int thisTesting = testFunction(thisOne); 
	cout << thisTesting; */
	int stopvar = 0;
	cin >> stopvar; 
}

void determineHand(vector<Card> &cardInHand)
{
	//Variable to track number of matches 
	int myMatches = 0; 
	
	//Getting face value for first card in deck 
	Card firstCard = cardInHand[0]; 
	int firstCardFace = firstCard.getFace(); 

	//Increment my matches to show that first card matches first card 
	myMatches++; 

	//Checking the rest of the hand for matches
	for (int i = 1; i < 5; i++)
	{
		Card currentCard = cardInHand[i]; 
		int currentCardFace = currentCard.getFace(); 

		if (currentCardFace == firstCardFace)
		{
			myMatches++; 
		}
	}

	string handResult = " "; 

	//Determining the result of the hand 
	switch (myMatches)
	{
		case 1: 
			cout << "You have nothing. " << endl; 
			break; 

		case 2: 
			cout << "You have a pair. " << endl; 
			break; 

		case 3: 
			cout << "You have three of a kind. " << endl; 
			break; 
		
		case 4: 
			cout << "You have four of a kind. " << endl; 
			break; 

		default: 
			cout << "Something went wrong. " << endl; 
			break; 
	}


}
