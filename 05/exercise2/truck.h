#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"

class Truck : public Vehicle {
	
	friend std::ostream &operator<<(std::ostream &out, const Truck &v);
	
	public:
	
	Truck(int amountOfDoor, int amountOfCylinder, int transmissionType, std::string color, double fuelLevel, bool ifLoaded);
	virtual void printDetail();
	
	protected:
	bool ifLoaded_;
};

#endif