// Calculating overall order total from selection of 5 items 
// C5_14

#include <iostream>
using namespace std; 

int main() 
{
	double overallTotal = 0.0; 
	double productPrice = 0.0; 
	double productTotal = 1.0; 
	
	int productNum = 0; 
	int quantSold = 0; 
		
	//Get product number and quantity 
	cout << "Enter product number and quantity or -1, -1. " << endl;
	cin >> productNum >> quantSold; 	

	while (quantSold != -1) 
	{
 		int loopNumber = productNum; 
	
		switch (loopNumber)
		{
			case 1: 
				productPrice = 2.98; 
				break; 
		
			case 2: 
				productPrice = 4.50; 
				break; 

			case 3: 
				productPrice = 9.98; 
				break; 

			case 4: 
				productPrice = 4.49; 
				break; 
			
			case 5:
				productPrice = 6.87; 
				break; 

			default:
				cout << "Product number does not exist. Enter product number and quantity. " << endl; 
				break; 
		}
		
		productTotal = static_cast< double >(quantSold) * productPrice; 
		overallTotal = overallTotal + productTotal;
		
		cout << "Enter product number and quantity or -1, -1 to quit. " << endl; 
		cin >> productNum >> quantSold;  

	}
	
	//Display Order Total
	cout << "Overall total is : " << overallTotal << endl;  

}
