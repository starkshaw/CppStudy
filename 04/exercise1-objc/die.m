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
	if(sides>=4) {
		self.sides = sides;
	} else {
		printf("WARNING: The value of side should be greater or equal to 4.\n");
		self.sides = sides;
	}
	return self;
}

@end