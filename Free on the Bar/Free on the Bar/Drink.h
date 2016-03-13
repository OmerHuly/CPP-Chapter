#ifndef Drink_H
#define Drink_H

class Drink
{
public:
	char* getName() const {return name;};
	int prepare();

protected:
	char* name;
};

#endif 