#import <Foundation/Foundation.h>
#import <iostream>

using namespace std;

class Complex {
	public:
		Complex Add(Complex &complexNumber);
		friend Complex operator+(Complex &complexNumber1, Complex &complexNumber2);
		Complex Subtract(Complex &complexNumber);
		friend Complex operator-(Complex &complexNumber1, Complex &complexNumber2);
		Complex Multiply(Complex &complexNumber);
		friend Complex operator*(Complex &complexNumber1, Complex &complexNumber2);
		string Formula();
		void print();
		double getReal();
		double getImg();
		void setReal(double Real);
		void setImg(double Imaginary);
		Complex();
		Complex(double Real, double Imaginary);
	
	protected:
		double Real_;
		double Imaginary_;
};