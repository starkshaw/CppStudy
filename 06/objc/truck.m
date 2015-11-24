#import "truck.h"

@interface Truck()

@end

@implementation Truck

- (id) AmountOfDoor: (int) door AmountOfCylinder: (int) cylinder TransmissionType: (int) trans Color: (NSString *) color FuelLevel: (double) fuel IfLoaded: (BOOL) load {
	self = [super init];
	self.amountOfDoor = door;
	self.amountOfCylinder = cylinder;
	self.transmissionType = trans;
	self.color = color;
	self.fuelLevel = fuel;
	self.load = load;
	return self;
}

- (void) printDetail {
	[super printDetail];
	printf("\tThe truck is %s carrying cargo.\n", self.ifLoaded ? "currently" : "not");
}

- (void) horn {
	printf ("Horn by the truck!\n");
}

@end