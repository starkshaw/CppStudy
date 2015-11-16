#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car {
	public:
	
	Car();
	Car(std::string name, int maxSpeed, std::string color, int amountOfEngineValve);
	virtual void printDetail();
	~Car();
	
	protected:
	
	int maxSpeed_;
	int amountOfEngineValve_;
	std::string color_;
	std::string name_;
};

#endif