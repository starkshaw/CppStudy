#import "racecar.h"

@interface Racecar()

@end

@implementation Racecar

-(id) Name: (NSString *) name Sponsor: (NSString *) sponsor MaxSpeed: (int) maxSpeed Color: (NSString *) color AmountOfEngineValve: (int) engine AmountOfGearbox: (int) gear presenceOfParachute: (BOOL) parachute {
	[super init];
	self.name = name;
	self.color = color;
	self.amountOfEngineValve = engine;
	self.maxSpeed = maxSpeed;
	self.sponsor = sponsor;
	self.amountOfGearbox = gear;
	self.presenceOfParachute = parachute;
	return self;
}

-(void) printDetail {
	[super printDetail];
	printf("%s also has %d gears and is sposored by %s.\n%s has %sused its parachute.\n", [self.name UTF8String], self.amountOfGearbox, [self.sponsor UTF8String], [self.name UTF8String], self.presenceOfParachute ? "" : "not ");
	//printf("%s is %s and has a %d-valve engine. MAX SPEED = %d mph.\n", [self.name UTF8String], [self.color UTF8String], self.amountOfEngineValve, self.maxSpeed);
}

@end