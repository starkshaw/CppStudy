#import "vehicle.h"
#import "taxi.h"
#import "truck.h"

int main(int argc, char* argv[]) {
	Vehicle *car = [[Vehicle alloc] AmountOfDoor: 2 AmountOfCylinder: 6 TransmissionType: 3 Color: @"blue" FuelLevel: 14.6];
	Taxi *taxi = [[Taxi alloc] AmountOfDoor: 4 AmountOfCylinder: 6 TransmissionType: 5 Color: @"yellow" FuelLevel: 3.3 PresenceOfCustomer: NO];
	Truck *truck = [[Truck alloc] AmountOfDoor: 2 AmountOfCylinder: 16 TransmissionType: 8 Color: @"black" FuelLevel: 7.54 IfLoaded: YES];
	[car printDetail];
	printf("\n");
	[taxi printDetail];
	printf("\n");
	[truck printDetail];
	return 0;
}