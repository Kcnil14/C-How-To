//Credit Line class definition

//Member function in CreditLine.cpp
#include <string>
class CreditLine
{
public:
	explicit CreditLine( std::string); //initialize account name
	void setCreditLine( std::string); 
	std::string getCreditLine() const; 
	void calcCurrentCredit() const; 
private: 
	std::string creditName; 
};  
