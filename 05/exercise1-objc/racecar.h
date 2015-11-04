#import <Foundation/Foundation.h>
#import "car.h"

@interface Racecar : Car

-(id) Name: (NSString *) name Sponsor: (NSString *) sponsor MaxSpeed: (int) maxSpeed Color: (NSString *) color AmountOfEngineValve: (int) engine AmountOfGearbox: (int) gear presenceOfParachute: (BOOL) parachute;
-(void) printDetail;

@property (nonatomic) int amountOfGearbox;
@property (strong, nonatomic) NSString* sponsor;
@property (nonatomic) BOOL presenceOfParachute;

@end
