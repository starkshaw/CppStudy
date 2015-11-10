#include "die.h"

void die::roll(void) {
	point_ = rand() % sides_ + 1;
}
		
int die::getValue(void) {
	return point_;
}
		
int die::getNumsides(void) {
	return sides_;
}

die::die() {
	sides_ = 6;
}

die::die(int numSides) {
	if(numSides>=4){
		sides_ = numSides;
	} else {
		cout << "WARNING: The value of side should be greater or equal to 4." << endl;
		sides_ = numSides;
	}
}

die::~die() {
	
}