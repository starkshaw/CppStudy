#import "die.h"
#import <stdlib.h>

@interface die()

@end

@implementation die

- (void)roll {
	self.point = rand() % self.sides + 1;
}

- (id) init {
	self = [super init];
	self.sides = 6;
	return self;
}

- (id) initWithSidesOverFour: (int)sides {
	self = [super init];
	self.sides = sides;
	return self;
}

@end