#include "Drink.h"
#include <string>

class Wine: public Drink
{
public:
	Wine(char* wineName, int t_year);
	const char* getName();

protected:
	int year;
};

Wine::Wine (char* wineName, int t_year)
{
	name = wineName;
	year = t_year;
}

const char* Wine::getName () 
{
	std::string nameStr = name;
	nameStr.append(" (" + std::to_string(year) + ")");
	return(nameStr.c_str());
}