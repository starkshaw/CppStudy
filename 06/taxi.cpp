#include "taxi.h"

using namespace std;

Taxi::Taxi(int amountOfDoor, int amountOfCylinder, int transmissionType, std::string color, double fuelLevel, bool presenceOfCustomer)
: Vehicle::Vehicle(amountOfDoor, amountOfCylinder, transmissionType, color, fuelLevel) {
	this->presenceOfCustomer_ = presenceOfCustomer;
}

void Taxi::printDetail() {
	Vehicle::printDetail();
	cout << "\tThe taxi currently has " << (this->presenceOfCustomer_ ? "" : "no ") << "customers." << endl;
}

ostream &operator<<(ostream &out, const Taxi &v) {
	out << typeid(v).name()
	<< "\n\tNumber of Doors: " << v.amountOfDoor_
	<< "\n\tNumber of Cylinders: " << v.amountOfCylinder_
	<< "\n\tTransmission Type: " << v.transmissionType_
	<< "\n\tColor: " << v.color_
	<< "\n\tFuel Level: " << v.fuelLevel_ 
	<< "\n\tThe taxi currently has " << (v.presenceOfCustomer_ ? "" : "no ") << "customers." << endl;
	return out;
}

Taxi::~Taxi() {
	//delete this;
}

void Taxi::horn() {
	cout << "Horn by the taxi!" << endl;
}
