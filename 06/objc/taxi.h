#import <Foundation/Foundation.h>
#import "vehicle.h"

@interface Taxi : Vehicle

@property (nonatomic) BOOL presenceOfCustomer;

- (id) AmountOfDoor: (int) door AmountOfCylinder: (int) cylinder TransmissionType: (int) trans Color: (NSString *) color FuelLevel: (double) fuel PresenceOfCustomer: (BOOL) cus;
- (void) printDetail;
- (void) horn;

@end