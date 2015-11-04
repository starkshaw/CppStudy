#import <Foundation/Foundation.h>

@interface Car : NSObject

-(id) Name: (NSString *) name MaxSpeed: (int) maxSpeed Color: (NSString *) color AmountOfEngineValve: (int) engine;
-(void) printDetail;

@property (nonatomic) int maxSpeed;
@property (nonatomic) int amountOfEngineValve;
@property (strong, nonatomic) NSString* color;
@property (strong, nonatomic) NSString* name;

@end