#include "car.h"

using namespace std;

Car::Car() {
	this->name_ = "default";
	this->color_ = "black";
	this->maxSpeed_ = 90;
	this->amountOfEngineValve_ = 4;
}

Car::Car(string name, int maxSpeed, string color, int amountOfEngineValve) {
	this->name_ = name;
	this->color_ = color;
	this->maxSpeed_ = maxSpeed;
	this->amountOfEngineValve_ = amountOfEngineValve;
}

Car::~Car() {
	
}

void Car::printDetail() {
	cout << this->name_ << " is " << this->color_ << " and has a " << this->amountOfEngineValve_ << "-valve engine. MAX SPEED = " << this->maxSpeed_ << " mph." << endl;
}