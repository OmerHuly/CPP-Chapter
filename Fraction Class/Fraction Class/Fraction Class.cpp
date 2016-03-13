// Fraction Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Fraction.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Fraction a(1, 3);
	Fraction b(1, 5);
	Fraction c;
	c = a * b;
	c.println();
	c = a / b;
	c.println();
	c = -a;
	c.println();
	float f = b.cvtToFloat();
	std::cout << "Converting to float: " << f << std::endl;
	c = a + b;
	c.println();
	c = a - b;
	c.println();
	std::cout << "Now with int: " << std::endl;
	c = a + 2;
	c.println();
	c = a - 2;
	c.println();
	c = a * 2;
	c.println();
	c = a / 2;
	c.println();
	std::cout << "Now with 0: " << std::endl;
	Fraction zero(0,0);
	a = a + zero;
	b = c - zero;
	c = c * zero;
	a.println();
	b.println();
	c.println();
	c = c / zero;
	c.println();
	f = c.cvtToFloat();
	std::cout << "Converting to float: " << f << std::endl;
	getchar();
	return 0;
}

