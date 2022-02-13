#pragma once
#include <iostream>

class ThisExample
{
private:
	int somethingSpecific;
public:
	ThisExample(int somethingSpecific)
	{
		//this.somethingSpecific = somethingSpecific;
		this->setValue(somethingSpecific); // proper way
	}

	//Functions
	void setValue(int somethingSpecific)
	{
		this->somethingSpecific = somethingSpecific;
	}
	void printAdressAndValue()
	{
		std::cout << "The object at adress " << this << " has value " << this->somethingSpecific << std::endl;
	}
};