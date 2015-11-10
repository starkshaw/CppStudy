#include "complex.h"

int main(int argc, char* argv[]) {
	Complex cmplx1 = Complex(3,2);
	Complex cmplx2 = Complex(50,3);
	cout << "2 complex numbers are as follow:" << endl;
	cmplx1.print();
	cmplx2.print();
	cout << "(" << cmplx1.Formula() << ") + (" << cmplx2.Formula() << ") = " << (cmplx1 + cmplx2).Formula() << endl;
	cout << "(" << cmplx1.Formula() << ") - (" << cmplx2.Formula() << ") = " << (cmplx1 - cmplx2).Formula() << endl;
	cout << "(" << cmplx1.Formula() << ") * (" << cmplx2.Formula() << ") = " << (cmplx1 * cmplx2).Formula() << endl;
	return 0;
}