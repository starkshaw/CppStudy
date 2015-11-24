#import "vehicle.h"

@interface Vehicle()

@end

@implementation Vehicle

- (id) AmountOfDoor: (int) door AmountOfCylinder: (int) cylinder TransmissionType: (int) trans Color: (NSString *) color FuelLevel: (double) fuel {
	self = [super init];
	self.amountOfDoor = door;
	self.amountOfCylinder = cylinder;
	self.transmissionType = trans;
	self.color = color;
	self.fuelLevel = fuel;
	return self;
}

- (void) printDetail {
	printf("%s\n", [NSStringFromClass([self class]) UTF8String]);
	printf("\tNumber of Doors: %d\n", self.amountOfDoor);
	printf("\tNumber of Cylinders: %d\n", self.amountOfCylinder);
	printf("\tTransmission Type: %d\n", self.transmissionType);
	printf("\tColor: %s\n", [self.color UTF8String]);
	printf("\tFuel Level: %.2f\n", self.fuelLevel);
}

- (void) horn {
	printf ("Horn by the vehicle!\n");
}

@end