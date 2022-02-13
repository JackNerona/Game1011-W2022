#include <iostream>
#include "NumberArray.h"
using namespace std;

NumberArray::NumberArray()//Default constructor
{
	cout << "No size of array provided. Defaulting to 10";
	arraySize = 10;
	aPtr = new double[arraySize];
	setValue(1);
}

NumberArray::NumberArray(NumberArray& obj)//Copy Constructor
{
	arraySize = obj.arraySize;
	aPtr = new double[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = obj.aPtr[i]; // Explicitly assign each array element to the new array
	}
}

NumberArray::NumberArray(int size, double value)
{
	arraySize = size;
	aPtr = new double[arraySize];
	setValue(value);
}

NumberArray::~NumberArray()
{
	if (arraySize > 0) //Ensure there is an array that exists
	{
		delete[] aPtr;
		aPtr = nullptr;
	}
}

void NumberArray::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aPtr[i] << " ";
	}
}

void NumberArray::setValue(double value)
{
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = value;
	}
}