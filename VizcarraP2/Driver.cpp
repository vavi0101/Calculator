// Valeria Vizcarra vvizcarra@cnm.edu
// First Class: Simple Calc

//Driver.cpp

#include "Calculator.h"
#include<string>
#include<sstream>
#include<iostream>


using namespace std;
int main()

{

	//Show the header and describe the calculator
	cout << "**Valeria Vizcarra* C++ II* Master Calculator**\n";
	cout << "***Hello and welcome to the master Calculator!***\n\n ";
	//declare some variables to use 

	double op1{}, op2{};
	char again{'y'};
	char oper{ ' ' };
	double results;
	double answer;
	

	// Create a simpleCalc object
	SimpleCalc calc;

	//Open a loop
	while (again == 'y' || again == 'Y')
	{
		//Get inputs from the user
		cout << "\nWhat operation would you like to start with today?\n"
			"Enter * to multiply, / to divide, + to add and - to subtract: ";
		cin >> oper;
		cout << " \nEnter the first number :  ";
		cin >> op1;
		cout << " \nEnter the second number:  ";
		cin >> op2;

		//Use calc to call SetOperation
		calc.SetOperation(oper, op1, op2);
		
		//Use calc to get the results 
		calc.GetResults();
		//Display the results
		cout << calc.GetResults();

		//Ask if they want to calculate some more
		cout << "\nDo you want to calculate some more? (y/n): ";
		cin >> again;
		//if not say good bye
		if (again == 'n' || again == 'N')
			cout << " \nGood-Bye and thank you for using C++ Calculator.\n";
	}
	return 0;
}