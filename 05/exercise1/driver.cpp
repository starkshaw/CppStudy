#include "car.h"
#include "racecar.h"

using namespace std;

int main(int argc, char* argv[]) {
	Car *chevy = new Car("Chevrolette", 95, "black", 4);
	Racecar *f1 = new Racecar("Ferrari", 220, "red", 40, "Bug2Bug", 7, true);
	chevy->printDetail();
	f1->printDetail();
	return 0;
}