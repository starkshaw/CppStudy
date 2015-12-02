#include "vehicle.h"

using namespace std;

Vehicle::Vehicle(int amountOfDoor, int amountOfCylinder, int transmissionType, std::string color, double fuelLevel) {
	this->amountOfDoor_ = amountOfDoor;
	this->amountOfCylinder_ = amountOfCylinder;
	this->transmissionType_ = transmissionType;
	this->color_ = color;
	this->fuelLevel_ = fuelLevel;
}

void Vehicle::printDetail() {
	cout << typeid(*this).name() << endl;
	cout << "\tNumber of Doors: " << this->amountOfDoor_ << endl;
	cout << "\tNumber of Cylinders: " << this->amountOfCylinder_ << endl;
	cout << "\tTransmission Type: " << this->transmissionType_ << endl;
	cout << "\tColor: " << this->color_ << endl;
	cout << "\tFuel Level: " << this->fuelLevel_ << endl;
}

ostream &operator<<(ostream &out, const Vehicle &v) {
	out << typeid(v).name()
	<< "\n\tNumber of Doors: " << v.amountOfDoor_
	<< "\n\tNumber of Cylinders: " << v.amountOfCylinder_
	<< "\n\tTransmission Type: " << v.transmissionType_
	<< "\n\tColor: " << v.color_
	<< "\n\tFuel Level: " << v.fuelLevel_ << endl;
	return out;
}

Vehicle::~Vehicle() {
	//delete this;
}

void Vehicle::horn() {
	cout << "Horn by the vehicle!" << endl;
}
