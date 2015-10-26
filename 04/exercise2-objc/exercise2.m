#import <Foundation/Foundation.h>
#import "complex.h"

int main(int argc, char* argv[]) {
	@autoreleasepool {
		Complex *cmplx1 = [[Complex alloc]initWithValue:3 Imaginary:2];
		Complex *cmplx2 = [[Complex alloc]initWithValue:50 Imaginary:3];
		printf("2 complex numbers are as follow:\n");
		[cmplx1 print];
		[cmplx2 print];
		printf("(%s) + (%s) = %s\n", [cmplx1.Formula UTF8String], [cmplx2.Formula UTF8String], [[cmplx1 Add:cmplx2].Formula UTF8String]);
		printf("(%s) - (%s) = %s\n", [cmplx1.Formula UTF8String], [cmplx2.Formula UTF8String], [[cmplx1 Subtract:cmplx2].Formula UTF8String]);
		printf("(%s) * (%s) = %s\n", [cmplx1.Formula UTF8String], [cmplx2.Formula UTF8String], [[cmplx1 Multiply:cmplx2].Formula UTF8String]);
		return 0;
	}
}