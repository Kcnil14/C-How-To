//implementation of Card.h
#include <iostream>
#include "Card.h" 
#include <stdexcept>

using namespace std; 

//constructor for Card object
Card::Card(int myFace, int mySuit)
{
	if (myFace <= 12 && myFace >= 0)
	{
		face = myFace; 
	}
	else
	{
		//If out of range set to default value 
		face = 0; 
	}

	if (mySuit <= 3 && mySuit >= 0)
	{
		suit = mySuit; 
	}
	else
	{
		//If out of range set to default value 
		suit = 0; 
	}

}

void Card::setCard(int myFace, int mySuit)
{
	setFace(myFace); 
	setSuit(mySuit); 
}

void Card::setSuit(int mySuit)
{
	suit = mySuit; 
}

void Card::setFace(int myFace)
{
	face = myFace; 
}

int Card::getFace() const
{
	return face; 
}

int Card::getSuit() const
{
	return suit; 
}

string Card::toString()
{

		string myCard = facesArray[face] + " of " + suitsArray[suit];
		return myCard;

}

