#include <iostream>

using namespace std;

void my_swap (int a, int b);

static int a, b;

int main (int argc, char *argv[]) {
	cout << "Input the interger a: ";
	cin >> a;
	cout << "Input the interger b: ";
	cin >> b;
	cout << "BEFORE\na = " << a << "\nb = " << b << endl;
	my_swap(a,b);
	cout << "AFTER\na = " << a << "\nb = " << b << endl;
	retun 0;
}

void my_swap (int numA, int numB) {
	int tmp = numA;
	a = numB;
	b = tmp;
}