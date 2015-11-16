#include "racecar.h"

using namespace std;

Racecar::Racecar() : Car::Car() {
	this->sponsor_ = "themselves";
	this->presenceOfParachute_ = false;
	this->amountOfGearbox_ = 6;
}

Racecar::Racecar(string name, int maxSpeed, string color, int amountOfEngineValve, string sponsor, int amountOfGearbox, bool presenceOfParachute)
: Car::Car(name, maxSpeed, color, amountOfEngineValve) {
	this->sponsor_ = sponsor;
	this->presenceOfParachute_ = presenceOfParachute;
	this->amountOfGearbox_ = amountOfGearbox;
}

void Racecar::printDetail() {
	Car::printDetail();
	cout << this->name_ << " also has " << this->amountOfGearbox_ << " gears and is sponsored by " << this->sponsor_ << ".\n" << this->name_ << " has " << (this->presenceOfParachute_ ? "" : "not ") << "used its parachute." << endl;
}

Racecar::~Racecar() {
	
}