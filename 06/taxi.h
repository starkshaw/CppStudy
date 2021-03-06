#ifndef TEXI_H
#define TEXI_H

#include "vehicle.h"

class Taxi : public Vehicle {
	
	friend std::ostream &operator<<(std::ostream &out, const Taxi &v);
	
	public:
	
	Taxi(int amountOfDoor, int amountOfCylinder, int transmissionType, std::string color, double fuelLevel, bool presenceOfCustomer);
	void printDetail();
	void horn();
	virtual ~Taxi();
	
	protected:
	bool presenceOfCustomer_;
};

#endif
