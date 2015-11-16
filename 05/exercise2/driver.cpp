#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

using namespace std;

int main(int argc, char* argv[]) {
	Vehicle *car = new Vehicle(2, 6, 3, "blue", 14.6);
	Taxi *taxi = new Taxi(4, 6, 5, "yellow", 3.3, false);
	Truck *truck = new Truck(2, 16, 8, "black", 7.54, true);
	cout << "Regular Method Calling:" << endl;
	car->printDetail();
	cout << endl;
	taxi->printDetail();
	cout << endl;
	truck->printDetail();
	cout << endl;
	cout << "Operator Overloading:" << endl;
	cout << *car << endl;
	cout << *taxi << endl;
	cout << *truck << endl;

	return 0;
}