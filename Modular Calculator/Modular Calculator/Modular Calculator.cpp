// Modular Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

class calculatorOperation
{
public:
	bool supportsOperation(string op_string);
	int requiredParameters() {return parameters;}
	double calcResult(double currVal, vector<string> parameters);

protected:
	int parameters;
};

class set:public calculatorOperation
{
	set() {parameters = 2;}
};

class addition:public calculatorOperation
{
	addition() {parameters = 2;}
};

class subtraction:public calculatorOperation
{
	subtraction() {parameters = 2;}
};

class multiplication:public calculatorOperation
{
	multiplication() {parameters = 2;}
};

class division:public calculatorOperation
{
	division() {parameters = 2;}
};

class squareRoot:public calculatorOperation
{
	squareRoot() {parameters = 1;}
};

class exponentiation:public calculatorOperation
{
	exponentiation() {parameters = 2;}
};

int _tmain(int argc, _TCHAR* argv[])
{
	double reg = 0;
	char * input;
	cout << "Welcome to modular calculator!\n" << endl;
	cin >> input;
	char * splitter = strtok(input, " ");
	char * op = splitter;	//operation
	splitter = strtok(NULL, " ");
	char * val = splitter;	//value
}

