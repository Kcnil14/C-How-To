//definition for card class 9_23
#ifndef CARD_H
#define CARD_H

#include <string>


const std::string suitsArray[4] = { "Clubs", "Diamonds", "Hearts", "Spades" };
const std::string facesArray[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };

class Card
{
	friend class DeckOfCards; 
public: 
	Card() {}; 
	Card(int myFace, int mySuit); // constructor prototype default value of 0,0
	void setCard(int, int); //set card
	void setSuit(int); 
	void setFace(int); 
	int getSuit() const; 
	int getFace() const; 
	std::string toString(); //function to get cards name 

private: 
	int face; 
	int suit; 

};
#endif
