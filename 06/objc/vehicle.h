#import <Foundation/Foundation.h>

@interface Vehicle : NSObject

@property (nonatomic) int amountOfDoor;
@property (nonatomic) int amountOfCylinder;
@property (nonatomic) int transmissionType;
@property (strong, nonatomic) NSString* color;
@property (nonatomic) double fuelLevel;

- (id) AmountOfDoor: (int) door AmountOfCylinder: (int) cylinder TransmissionType: (int) trans Color: (NSString *) color FuelLevel: (double) fuel;
- (void) printDetail;
- (void) horn;

@end