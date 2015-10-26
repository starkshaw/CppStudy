#import "die.h"
#import <stdlib.h>

@interface die()

@end

@implementation die

- (void)roll {
	self.point = rand() % 6 + 1;
}

- (int)getNumsides {
	return 6;
}

@end