#ifndef RACECAR_H
#define RACECAR_H

#include <iostream>
#include "car.h"

class Racecar : public Car {
	public:
	
	Racecar();
	Racecar(std::string name, int maxSpeed, std::string color, int amountOfEngineValve, std::string sponsor, int amountOfGearbox, bool presenceOfParachute);
	virtual void printDetail();
	~Racecar();
	
	protected:
	
	int amountOfGearbox_;
	std::string sponsor_;
	bool presenceOfParachute_;
};

#endif