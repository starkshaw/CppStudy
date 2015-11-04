#import "car.h"

@interface Car()

@end

@implementation Car

-(id) Name: (NSString *) name MaxSpeed: (int) maxSpeed Color: (NSString *) color AmountOfEngineValve: (int) engine {
	self = [super init];
	self.name = name;
	self.color = color;
	self.amountOfEngineValve = engine;
	self.maxSpeed = maxSpeed;
	return self;
}

-(void) printDetail {
	printf("%s is %s and has a %d-valve engine. MAX SPEED = %d mph.\n", [self.name UTF8String], [self.color UTF8String], self.amountOfEngineValve, self.maxSpeed);
}

@end