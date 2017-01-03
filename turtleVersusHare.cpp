//Make a Tortoise versus Hare game using pointer based passed by reference to modify their positions 
//Chp 8_12

#include <iostream>
#include <array>
#include <string>
#include <random>
#include <ctime>

using namespace std; 

int hareMove(int *hPosit, int *hMove); 
int tortMove(int *tPosit, int *tMove); 

int main()
{
	//Setting up race track 
	const size_t sizeArray = 70;
	array<string, sizeArray>raceTrack = {};
	string *raceTrackPtr = &raceTrack[0];

	for (int i = 0; i < sizeArray; i++)
	{
		raceTrack[i] = "_";
	}

	//Variables for tracking race participants 
	int harePosition = 0;
	int turtPosition = 0;
	int *hPositPtr = &harePosition;
	int *tPositPtr = &turtPosition;
	bool raceFinished = false;

	default_random_engine raceEngine(static_cast <unsigned int>(time(0)));
	uniform_int_distribution<unsigned int> randomInt(1, 10);
	
	//Beginning the race 
	cout << "BANG !!!! \nAND THEY'RE OFF !!!!" << endl;

	while (raceFinished == false)
	{
		for (int raceTime = 0; raceTime < sizeArray; raceTime++)
		{
			//Generate random number to serve as race move 

			int currentMove = randomInt(raceEngine);
			int *cMovePtr = &currentMove;

			int hareOldPosit = hareMove(hPositPtr, cMovePtr);
			int turtOldPosit = tortMove(tPositPtr, cMovePtr); 

			if (harePosition >= 69)
			{
				raceFinished = true;
				cout << "Hare wins!!" << endl;
				break;

			}
			else if (turtPosition >= 69)
			{
				raceFinished = true; 
				cout << "Turtle wins!!" << endl; 
				break; 
			}
			else
			{	
				raceTrack[harePosition] = "H"; 
				raceTrack[hareOldPosit] = "_"; 
				raceTrack[turtOldPosit] = "_"; 
				raceTrack[turtPosition] = "T"; 

				if (turtPosition == harePosition)
				{
					cout << "OUCH!!" << endl; 
				}
			}

			for (int i = 0; i < sizeArray; i++)
			{
				cout << raceTrack[i]; 
			}

			cout << "\n"; 

		}

	}
}


int hareMove(int *hPosit, int *hMove)
{
	//Used to store turtle's old position to set it to '_' in array
	int oldPosition = *hPosit; 

	//Determining how the hare will move and updating hareMove using the pointer
	if (*hMove == 1 || *hMove == 2)
	{
		*hPosit = *hPosit; 
	}
	else if (*hMove == 3 || *hMove == 4)
	{
		*hPosit += 9; 
	}
	else if (*hMove == 5)
	{
		*hPosit -= 12; 

		if (*hPosit < 0)
		{
			*hPosit = 0; 
		}
	}
	else if (*hMove >= 6 && *hMove <= 8)
	{
		*hPosit += 1; 
	}
	else
	{
		*hPosit -= 1; 

		if (*hPosit < 0)
		{
			*hPosit = 0; 
		}
	}

	return oldPosition; 
}

int tortMove(int *tPosit, int *tMove)
{
	//Used to store turtle's old position to set it to '_' in array
	int oldPosition = *tPosit; 

	if (*tMove >= 1 && *tMove <= 5)
	{
		*tPosit += 3; 
	}
	else if (*tMove == 6 || *tMove == 7)
	{
		*tPosit -= 6;

		if (*tPosit < 0)
		{
			*tPosit = 0; 
		}
	}
	else
	{
		*tPosit += 1; 
	}

	return oldPosition; 
}
