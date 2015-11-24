#import "parkinglot.h"

@interface ParkingLot()

@end

@implementation ParkingLot

-(id) init {
	self = [super init];
	if(!self.vehicles) {
		self.vehicles = [[NSMutableArray alloc] init];	
	}
	return self;
}

- (void) addVehicle: (Vehicle*) newVehicle {
	[self.vehicles addObject: newVehicle];
}

- (void) printVehicles {
	for(int i = 0; i < [self.vehicles count]; i++) {
		[self.vehicles[i] printDetail];
	}
}

- (int) getVehicleCount {
	return [self.vehicles count];
}

- (void) hornEach {
	for(Vehicle* i in self.vehicles) {
		[i horn];
	}
}

@end