#include <iostream>

using namespace std;
// Declaration

int main(int argc, char *argv[]) {
	int a, b;
	cout << "The first integer: ";
	cin >> a;
	cout << "The second integer: ";
	cin >> b;
	if (a % b ==0) {
		cout << a << " is a multiple of " << b << endl;
	} else {
		cout << a << " is not a multiple of " << b << endl;
	}
	return 0;
}