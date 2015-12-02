#include "truck.h"

using namespace std;

Truck::Truck(int amountOfDoor, int amountOfCylinder, int transmissionType, std::string color, double fuelLevel, bool ifLoaded)
: Vehicle(amountOfDoor, amountOfCylinder, transmissionType, color, fuelLevel) {
	this->ifLoaded_ = ifLoaded;
}

void Truck::printDetail() {
	Vehicle::printDetail();
	cout << "\tThe truck is " << (this->ifLoaded_ ? "currently" : "not") << " carrying cargo." << endl;
}

ostream &operator<<(ostream &out, const Truck &v) {
	out << typeid(v).name()
	<< "\n\tNumber of Doors: " << v.amountOfDoor_
	<< "\n\tNumber of Cylinders: " << v.amountOfCylinder_
	<< "\n\tTransmission Type: " << v.transmissionType_
	<< "\n\tColor: " << v.color_
	<< "\n\tFuel Level: " << v.fuelLevel_
	<< "\n\tThe truck is " << (v.ifLoaded_ ? "currently" : "not") << " carrying cargo." << endl;	
	return out;
}

Truck::~Truck() {
	//delete this;
}

void Truck::horn() {
	cout << "Horn by the truck!" << endl;
}
