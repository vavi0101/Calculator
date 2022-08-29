#ifndef SIMPLE_CALC_H
#define SIMPLE_CALC_H


#include<string>
#include <sstream>
using namespace std;

class SimpleCalc
{
private:
	char operation{'+'};
	double number1{ 0.0 };
	double number2{ 1.0 };

	double answer{ 1.0 };
	string results;
	string desc;

	//can check for diviosn by zero here and don't call calculate if it is zero
	void Calculate();

public:
	SimpleCalc(); //deafult
	void SetOperation(char oper, double op1, double op2);
	string GetResults();



};
#endif