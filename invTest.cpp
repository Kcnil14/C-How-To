#include <string>
#include <iostream>
#include "Invoice.h"

using namespace std; 

int main() {

	Invoice invoice1{"ABC", "Socket Wrench", 5, 3}; 

	cout << invoice1.getPartNumber() << "  " <<  invoice1.getPartDescription() << " " << invoice1.getQuantity() << " " << invoice1.getPrice();

	int quantity = invoice1.getQuantity(); 
	int price = invoice1.getPrice(); 

	cout << "\n The total value for this item is " << invoice1.getInvoiceAmount(quantity, price); 

} 
