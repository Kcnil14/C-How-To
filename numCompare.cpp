// Fig 2.13: fig02_13.cpp
// Comparing integers using if statments, relational op and equality op

#include <iostream>

using std::cout; //program uses cout
using std::cin; //program uses cin
using std::endl; //program uses enl 

//function main begins program execution 

int main() {
	int number1{0}; 
	int number2{0}; 

	cout << "Enter two integers to compare: "; //Prompt user for data

	cin >> number1 >> number2; // get 2 int from user 

	if (number1 == number2) {
		cout << number1 << " == " << number2 << endl; 
	}

	if (number1 != number2) {
		cout << number1 << " != " << number2 << endl; 
	}

	if (number1 < number2) {
		cout << number1 << " < " << number2 << endl; 
	}

	if (number1 > number2) {
		cout << number1 << " > " << number2 << endl; 
	}
	
	if (number1 >= number2) {
		cout << number1 << " >= " << number2 << endl;
	}

	if (number1 <= number2) {
		cout << number1 << " <= " << number2 << endl; 
	}
}
