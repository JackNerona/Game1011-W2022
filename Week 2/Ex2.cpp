#include <iostream>
#include<iomanip>
#include "Budget.h"
using namespace std;

//int main()
//{
//	const int N_DIVISION = 4;
//
//	cout << "Enter the main office's budget request: ";
//	double amount;
//	cin >> amount;
//
//	//Call the static main office function in the budget class.
//	Budget::mainOffice(amount);
//
//	//Create instances of class
//	Budget divisions[N_DIVISION];
//
//	//Get budget for each division
//	for (int i = 0; i < N_DIVISION; i++)
//	{
//		double bud;
//
//		cout << "Enter the budget request for division " << (i + 1) << ": ";
//		cin >> bud;
//		divisions[i].addBudget(bud);
//	}
//
//	//Display budget request for each division
//	cout << setprecision(2) << showpoint << fixed;
//	cout << "\nHere are the division budget requests: \n";
//	for (int i = 0; i < N_DIVISION; i++)
//	{
//		cout << "Division " << (i + 1) << "\t$:";
//			cout << divisions[i].getDivBudget();
//			cout << endl;
//			//
//	}
//
//	// Display the total corporate budget
//	cout << "Total budget requests (including main office):\t$";
//	cout << Budget::getCorpBudget() << endl;
//
//		return 0;
//}