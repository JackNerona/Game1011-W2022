// This program demonstrates the deficiencies of the default copy constructor
#include <iostream>
#include <iomanip>
#include "NumberArray.h"
using namespace std;

int main()
{
	NumberArray first(5, 33.75);

	NumberArray second = first; //Triggers copy constructor

	//Display the contents of the objects
	cout << setprecision(2) << fixed << showpoint;
	cout << "Value stored in first object is ";
	first.print();
	cout << endl << "Value stored in second object is: ";
	second.print();
	cout << endl << endl;

	second.setValue(10.5);

	cout << setprecision(2) << fixed << showpoint;
	cout << "Value stored in first object is ";
	first.print();
	cout << endl << "Value stored in second object is: ";
	second.print();
	cout << endl << endl;

	return 0;
}