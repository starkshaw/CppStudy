#import "taxi.h"

@interface Taxi()

@end

@implementation Taxi

- (id) AmountOfDoor: (int) door AmountOfCylinder: (int) cylinder TransmissionType: (int) trans Color: (NSString *) color FuelLevel: (double) fuel PresenceOfCustomer: (BOOL) cus {
	self = [super init];
	self.amountOfDoor = door;
	self.amountOfCylinder = cylinder;
	self.transmissionType = trans;
	self.color = color;
	self.fuelLevel = fuel;
	self.presenceOfCustomer = cus;
	return self;
}

- (void) printDetail {
	[super printDetail];
	printf("\tThe taxi currently has %scustomers.\n", self.presenceOfCustomer ? "" : "no ");
}

@end