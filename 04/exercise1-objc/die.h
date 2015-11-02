#import <Foundation/Foundation.h>

@interface die : NSObject

- (void)roll;
- (id)init;
- (id)initWithSidesOverFour: (int)sides;

@property (nonatomic) int point;
@property (nonatomic) int sides;

@end