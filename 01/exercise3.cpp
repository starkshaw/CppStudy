#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int a;
	cout << "Input a 5-digit integer: ";
	cin >> a;
	cout << a / 10000 << "   " << a % 10000 / 1000 << "   " << a % 1000 / 100 << "   " << a % 100 / 10 << "   " << a % 10 << endl;
}