#import "complex.h"

@interface Complex()

@end

@implementation Complex

- (Complex *) Add: (Complex *)complexNumber {
	Complex *answer = [Complex new];
	answer.Real = self.Real + complexNumber.Real;
	answer.Imaginary = self.Imaginary + complexNumber.Imaginary;
	return answer;
}

- (Complex *) Subtract: (Complex *)complexNumber {
	Complex *answer = [Complex new];
	answer.Real = self.Real - complexNumber.Real;
	answer.Imaginary = self.Imaginary - complexNumber.Imaginary;
	return answer;
}

- (Complex *) Multiply: (Complex *)complexNumber {
	Complex *answer = [Complex new];
	answer.Real = (self.Real * complexNumber.Real) - (self.Imaginary * complexNumber.Imaginary);
	answer.Imaginary = (self.Imaginary * complexNumber.Real) + (self.Real * complexNumber.Imaginary);
	return answer;
}

- (NSString *) Formula {
	return [NSString stringWithFormat: @"%.0f + %.0fi", self.Real, self.Imaginary];
}

- (void) print {
	printf("%.0f + %.0fi\n", self.Real, self.Imaginary);
}

- (id) init {
	self = [super init];
	self.Real = 0;
	self.Imaginary = 0;
	return self;
}

- (id) initWithValue: (double)real Imaginary: (double)imag {
	self = [super init];
	self.Real = real;
	self.Imaginary = imag;
	return self;
}

@end