#include <iostream>
#include <cmath> 
#include "Complex.h"

using namespace std; 

int main()
{
	Complex mycomplex(1.1, -1.1); 
	
	cout << mycomplex.getRealNum() << " " << mycomplex.getImagNum() <<  endl; 

	mycomplex.printComplex(); 
}
