//Functions defined in Package.cpp
//Chap11_9


#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package
{
public: 
	Package(std::string, std::string, std::string, std::string, int = 0, std::string, std::string, std::string, std::string, int = 0, double = 0.0,double = 0.0 ); 

	void setSenderName(std::string); // set sender
	std::string getSenderName() const; // return sender's name	

	void setSenderAddress(std::string); //set sender's address
	std::string getSenderAddress() const; //get sender's address

	void setSenderCity(std::string); //sender's city
	std::string getSenderCity() const; // get sender's city

	void setSenderState(std::string); //sender's state
	std::string getSenderState() const; //get sender's state

	void setSenderZip(int); //sender zip
	int getSenderZip() const; // get zip

	void setRecName(std::string); //set receipent
	std::string getRecName() const; //get recip name

	void setRecAddress(std::string); //set recip address 
	std::string getRecAddress() const; //get recip address  

	void setRecCity(std::string); //set recip city
	std::string getRecCity() const; //get recip city


	void setRecState(std::string); //set state recip
	std::string getRecState() const; //get recip state 

	void setRecZip(int); //set recip zip code
	int getRecZip() const; // get recip zip code  

	void setWeight(double); //weight of package
	double getWeight() const; //get weight of package

	void setCostPerOunce(double); //cost to ship per ounce
	double getCostPerOunce() const;// get cost to ship per ounce

	double calculateCost(); //calculate cost to ship

private: 
	std::string senderName;
	std::string senderAddress; 
	std::string senderCity; 
	std::string senderState; 
	int senderZip; 
	std::string recipName; 
	std::string recipAddress; 
	std::string recipCity;
	std::string recipState; 
	int recipZip; 
	double weight; 
	double costPerOunce;
	double totalCost;  
};

#endif  
