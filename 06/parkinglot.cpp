#include "parkinglot.h"

using namespace std;

ParkingLot::ParkingLot() {
	//this->count_ = 0;
}

ParkingLot::~ParkingLot() {
	//delete this;
}

void ParkingLot::addVehicle(Vehicle* newVehicle) {
	this->vehicles_.push_back(newVehicle);
	//this->count_++;
}

void ParkingLot::printVehicles() {
	for(int i = 0; i < this->vehicles_.size(); i++) {
		this->vehicles_[i]->printDetail();
	}
}

int ParkingLot::getVehicleCount() {
	//return this->count_;
	return this->vehicles_.size();
}

void ParkingLot::hornEach() {
	for(int i = 0; i < this->vehicles_.size(); i++) {
		this->vehicles_[i]->horn();
	}
}
