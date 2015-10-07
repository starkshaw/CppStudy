#include <iostream>

using namespace std;
// Declaration
int getMax(int a, int b);
int getMin(int a, int b);
double getMean(int a, int b, int c);

int main(int argc, char *argv[]) {
	int a, b, c, max, min;
	double mean;
	cout << "First number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	cout << "Third number: ";
	cin >> c;
	cout << "These numbers are " << a << ", " << b << ", " << c << "." << endl;
	max = getMax(a, b);
	max = getMax(max, c);
	min = getMin(a, b);
	min = getMin(min, b);
	mean = getMean(a, b, c);
	cout << "The maxima is " << max << endl;
	cout << "The minima is " << min << endl;
	cout << "The average value is " << mean << endl;
	return 0;
}

int getMax (int a, int b) {
	int max;
	if (a > b) {
		max = a;
	} else {
		max = b;
	}
	return max;
}

int getMin (int a, int b) {
	int min;
	if (a < b) {
		min = a;
	} else {
		min = b;
	}
	return min;
}

double getMean (int a, int b, int c) {
	return (a + b +c)/3;
}