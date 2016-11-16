#include <string>
#include <iostream>
#include "Invoice.h"

using namespace std; 

int main()
{

	Invoice invoice1{ "ABC", "Socket Wrench", 5, 3 }; 


	cout << "Invoices name is " << invoice1.getPartNumber(); 
	cout << "\nItem description is " << invoice1.getPartDescription(); 
	cout << "\nItem quantity is " << invoice1.getQuantity(); 
	cout << "\nCost per item is " << invoice1.getPrice(); 

	int quantity = invoice1.getQuantity(); 
	int price = invoice1.getPrice(); 

	//Displaying the total value. 
	cout << "\nThe total value for this item is " << invoice1.getInvoiceAmount(quantity, price); 
}
