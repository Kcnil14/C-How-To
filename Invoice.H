#pragma once
#include <string>

class Invoice {

public: 
	//Invoice constructor initializing 4 parameters 
	Invoice(std::string invPartNumber, std::string invPartDescript, int invQuantity, int invPricePerItem)
		:partNumber{ invPartNumber }, partDescription{ invPartDescript }{

		if (invQuantity > 0) {
			quantity = invQuantity; 
		}

		if (invPricePerItem > 0) {
			price_per_item = invPricePerItem; 
		}
	}

	//functions that get and set names 
	void setPartNumber(std::string invPartNumber) {
		
		partNumber = invPartNumber; 
	}

	std::string getPartNumber() const {
		
		return partNumber; 
	}

	void setPartDescription(std::string invPartDescript) {

		partDescription = invPartDescript; 
	}

	std::string getPartDescription() const {

		return partDescription; 
	}

	void setQuantity(int invQuantity) {

		quantity = invQuantity; 
	}

	int getQuantity() const {

		return quantity; 
	}

	void setPrice(int invPricePerItem) {

		price_per_item = invPricePerItem; 
	}

	int getPrice() const {

		return price_per_item; 
	}

	int getInvoiceAmount(int quantity, int price_per_item) {

		value = quantity * price_per_item; 
		return value; 
	}

private: 
	std::string partNumber;
	std::string partDescription; 
	int quantity{ 0 }; 
	int price_per_item{ 0 }; 
	int value{ 0 }; 
};
