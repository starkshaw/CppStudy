#include "complex.h"

int main(int argc, char* argv[]) {
	Complex cmplx1 = Complex(3,2);
	Complex cmplx2 = Complex(50,3);
	printf("2 complex numbers are as follow:\n");
	cmplx1.print();
	cmplx2.print();
	printf("(%s) + (%s) = %s\n", cmplx1.Formula().c_str(), cmplx2.Formula().c_str(), (cmplx1 + cmplx2).Formula().c_str());
	printf("(%s) - (%s) = %s\n", cmplx1.Formula().c_str(), cmplx2.Formula().c_str(), (cmplx1 - cmplx2).Formula().c_str());
	printf("(%s) * (%s) = %s\n", cmplx1.Formula().c_str(), cmplx2.Formula().c_str(), (cmplx1 * cmplx2).Formula().c_str());
	return 0;
}