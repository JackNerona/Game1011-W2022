#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//Constructor
	Person()
	{
		name = "DEFAULT";
		age = 1;
	}
	Person(string n)
	{
		name = n;
		age = 1;
	}
	Person(int a)
	{
		name = "DEFAULT";
		age = a;
	}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	/*Person(string n = "DEFAULT", int a = 1) //Does the job of all four above functions but includes implimentation but not wanted for header files
	{
		name = n;
		age = a;
	}*/
	//Functions
	string getName() { return name; } //accessor
	void setName(string n) { name = n; } //mutator

	int getAge() { return age; }
	void setAge(int a) { age = a; }
private:

	//Variables
	string name;
	int age;
};

struct Rectangle
{
	int width, height;
};

int main()
{
	Rectangle* pRect = nullptr;
	Person* pPerson = nullptr;

	Rectangle rect; // Instatnce of rectangle struct
	pRect = &rect;

	(*pRect).width = 10;
	pRect->height = 20; // preferred way to dereference a pointer to an object

	cout << "Area of the rectangle is: " << pRect->width * pRect->height << endl;

	//Dynamically allocate object through the pointer
	pRect = new Rectangle; 
	pRect->width = 6;
	pRect->height = 5;
	cout << "Area of the rectangle is: " << pRect->width * pRect->height << endl;
	delete pRect; //If new is used, end with delete keyword

	pRect = nullptr; //Deallocate pointer after use

	pPerson = new Person("Jack Nerona", 25);
	cout << pPerson->getName() << "is" << pPerson->getAge() << " years old" << endl;
	delete pPerson;
	pPerson = nullptr;

	return 0;
}