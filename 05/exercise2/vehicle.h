#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle {
	
	friend std::ostream &operator<<(std::ostream &out, const Vehicle &v);
	
	public:
	
	Vehicle(int amountOfDoor, int amountOfCylinder, int transmissionType, std::string color, double fuelLevel);
	virtual void printDetail();
	
	protected:
	int amountOfDoor_;
	int amountOfCylinder_;
	int transmissionType_;
	std::string color_;
	double fuelLevel_;
};

#endif