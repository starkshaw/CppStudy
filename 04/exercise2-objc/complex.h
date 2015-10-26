#import <Foundation/Foundation.h>

@interface Complex : NSObject

@property (nonatomic) double Real;
@property (nonatomic) double Imaginary;

- (Complex *) Add: (Complex *)complexNumber;
- (Complex *) Subtract: (Complex *)complexNumber;
- (Complex *) Multiply: (Complex *)complexNumber;
- (NSString *) Formula;
- (void) print;
- (id) init;
- (id) initWithValue: (double)real Imaginary: (double)imag;

@end