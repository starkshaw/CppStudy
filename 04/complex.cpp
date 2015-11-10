#include "complex.h"
#include <sstream>
#include <string>

Complex Complex::Add(Complex &complexNumber) {
	Complex answer;
	answer.Real_ = this->Real_ + complexNumber.Real_;
	answer.Imaginary_ = this->Imaginary_ + complexNumber.Imaginary_;
	return answer;
}

Complex operator+(Complex &complexNumber1, Complex &complexNumber2) {
	return complexNumber1.Add(complexNumber2);
}

Complex Complex::Subtract(Complex &complexNumber) {
	Complex answer;
	answer.Real_ = this->Real_ - complexNumber.Real_;
	answer.Imaginary_ = this->Imaginary_ - complexNumber.Imaginary_;
	return answer;
}

Complex operator-(Complex &complexNumber1, Complex &complexNumber2) {
	return complexNumber1.Subtract(complexNumber2);
}

Complex Complex::Multiply(Complex &complexNumber) {
	Complex answer;
	answer.Real_ = (this->Real_ * complexNumber.Real_) - (this->Imaginary_ * complexNumber.Imaginary_);
	answer.Imaginary_ = (this->Imaginary_ * complexNumber.Real_) + (this->Real_ * complexNumber.Imaginary_);
	return answer;
}

Complex operator*(Complex &complexNumber1, Complex &complexNumber2) {
	return complexNumber1.Multiply(complexNumber2);
}

string Complex::Formula() {
	stringstream output;
	output << this->Real_ << " + " << this->Imaginary_ << "i";
	return output.str();
}

void Complex::print () {
	cout << this->Real_ << " + " << this->Imaginary_ << "i" << endl;
}

double Complex::getReal() {
	return this->Real_;
}

double Complex::getImg() {
	return this->Imaginary_;
}

void Complex::setReal(double Real) {
	this->Real_ = Real;
}

void Complex::setImg(double Imaginary) {
	this->Imaginary_ = Imaginary;
}

Complex::Complex() { 
	this->Real_ = 0;
	this->Imaginary_ = 0;
}

Complex::Complex(double Real, double Imaginary) {
	this->Real_ = Real;
	this->Imaginary_ = Imaginary;
}

Complex::~Complex() {
	
}