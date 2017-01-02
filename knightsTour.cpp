#include <iostream>
#include <array>

using namespace std; 

int main()
{
	//Variables to track game moves 
	int moveCount = 0;
	int gameOverCounter = 0; 

	//Initializing board 
	const size_t bRows = 8; 
	const size_t bColumns = 8; 

	array<array<int, bColumns>, bRows> board = {}; 

	//Setting the knight's location  
	int currentRow = 3;
	int currentCol = 4; 
	board[currentRow][currentCol] = 1; 

	//Initializing arrays with moves
	array<int, bColumns> horizontal = { 2, 1, -1, -2, -1, 1, 1, 2 }; 
	array<int, bRows> vertical = { -1, -2, -2, -1, 1, 2, 2, 1 }; 


	//Prompt user for knight's move
	int uHorizontal = 0; 
	int uVertical = 0; 
	bool gameOver = false; 

	//variables to hold knights position
	int holdHorizon; 
	int holdVert; 
	
	while (gameOver == false)
	{

		cout << "Enter two of the following values to move the knight: 2, 1, -1, 2. " << endl;
		cin >> uVertical >> uHorizontal; 

		if (uVertical == 1 || uVertical == -1 || uVertical == 2 || uVertical == -2)
		{
			holdVert = currentRow + uVertical; 

			if (uHorizontal == 1 || uHorizontal == -1 || uHorizontal == 2 || uHorizontal == -2)
			{
				holdHorizon = currentCol + uHorizontal; 

				//Checking in the board to make sure the new currentRow & currentColumn are in board range
				if (holdHorizon >= 0 && holdHorizon <= 7)
				{
					if (holdVert >= 0 && holdVert <= 7)
					{
						
						//Check to make sure that this spot hasn't been visited before 
						if (board[holdVert][holdHorizon] == 1)
						{
							cout << "Spot has already been visited. Can't move here. " << endl; 
						}
						else
						{
							//In board range so assign the temporary holding variable to the offical tracker
							currentRow = holdVert;
							currentCol = holdHorizon;

							//Assigning the board a value of 1 to show it's moved there
							board[currentRow][currentCol] = 1; 
							moveCount++;
							
						}					
					}
					else
					{
						cout << "Move out of range. " << holdVert << endl; 
					}
				}
				else
				{
					cout << " Move out of range" << holdHorizon << endl; 
				}
			}
			else
			{
				cout << "Horizontal move isn't in valid range. Re-enter horizontal value. " << endl; 
				cin >> uHorizontal; 
			}
		}
		else
		{
			cout << "Vertical move isn't in valid range. Re-enter vertical value. " << endl; 
			cin >> uVertical; 
		}

		//Checking to see if all possible moves have been made 
		for (int i = 0; i < bRows; i++)
		{
			for (int j = 0; j < bColumns; j++)
			{
				if (board[i][j] == 1)
				{
					gameOverCounter++; 
				}
			}
		}

		if (gameOverCounter == 16)
		{
			
			cout << "Game is now over. You made a total of " << moveCount << " moves. " << endl; 
			gameOver = true;
		}

		//Print the current view of the board 
		for (int i = 0; i < bRows; i++)
		{
			for (int j = 0; j < bColumns; j++)
			{
				cout << board[i][j];
			}
			cout << "\n";
		}

		cout << "\n Current move count is " << moveCount << endl; 
	}
}
