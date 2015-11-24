#import "vehicle.h"
#import "taxi.h"
#import "truck.h"
#import "parkinglot.h"

int main(int argc, char* argv[]) {
	Vehicle *car = [[Vehicle alloc] AmountOfDoor: 2 AmountOfCylinder: 6 TransmissionType: 3 Color: @"blue" FuelLevel: 14.6];
	Taxi *taxi = [[Taxi alloc] AmountOfDoor: 4 AmountOfCylinder: 6 TransmissionType: 5 Color: @"yellow" FuelLevel: 3.3 PresenceOfCustomer: NO];
	Truck *truck = [[Truck alloc] AmountOfDoor: 2 AmountOfCylinder: 16 TransmissionType: 8 Color: @"black" FuelLevel: 7.54 IfLoaded: YES];
	ParkingLot *lot = [ParkingLot new];
	printf("Message passing:\n");
	[car printDetail];
	printf("\n");
	[taxi printDetail];
	printf("\n");
	[truck printDetail];
	printf("Horn!\n");
	[car horn];
	[taxi horn];
	[truck horn];
	[lot addVehicle: car];
	[lot addVehicle: taxi];
	printf("Parking Lot Details:\n");
	[lot printVehicles];
	printf("Horn each vehicle in the parking lot:\n");
	[lot hornEach];
	return 0;
}