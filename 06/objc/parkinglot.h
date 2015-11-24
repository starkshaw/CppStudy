#import <Foundation/Foundation.h>
#import "vehicle.h"

@interface ParkingLot : NSObject

- (id) init;
- (void) addVehicle: (Vehicle*) newVehicle;
- (void) printVehicles;
- (int) getVehicleCount;
- (void) hornEach;

@property (nonatomic, strong) NSMutableArray *vehicles;

@end