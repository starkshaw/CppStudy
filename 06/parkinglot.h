#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <vector>
#include "vehicle.h"

class ParkingLot {

public:
	ParkingLot();
	virtual ~ParkingLot();

	virtual void addVehicle(Vehicle* newVehicle);
	virtual	void printVehicles();
	virtual	int getVehicleCount();
	virtual void hornEach();

private:
	std::vector<Vehicle *> vehicles_;
	//int count_;

}; 

#endif
