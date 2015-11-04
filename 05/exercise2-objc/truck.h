#import <Foundation/Foundation.h>
#import "vehicle.h"

@interface Truck : Vehicle

@property (nonatomic, getter=ifLoaded) BOOL load;

- (id) AmountOfDoor: (int) door AmountOfCylinder: (int) cylinder TransmissionType: (int) trans Color: (NSString *) color FuelLevel: (double) fuel IfLoaded: (BOOL) load;
- (void) printDetail;

@end