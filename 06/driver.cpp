#include "vehicle.h"
#include "taxi.h"
#include "truck.h"
#include "parkinglot.h"

using namespace std;

int main(int argc, char* argv[]) {
	Vehicle *car = new Vehicle(2, 6, 3, "blue", 14.6);
	Vehicle *taxi = new Taxi(4, 6, 5, "yellow", 3.3, false);
	Vehicle *truck = new Truck(2, 16, 8, "black", 7.54, true);
	ParkingLot *lot = new ParkingLot();
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
	cout << "Horn!" << endl;
	car->horn();
	taxi->horn();
	truck->horn();
	lot->addVehicle(car);
	lot->addVehicle(taxi);
	lot->addVehicle(truck);
	cout << "Parking Lot Details:" << endl;
	lot->printVehicles();
	cout << "Horn each vehicle in the parking lot:" << endl;
	lot->hornEach();
	delete car;
	delete taxi;
	delete truck;
	delete lot;
	return 0;
}
