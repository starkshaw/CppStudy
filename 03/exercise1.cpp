#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int choice;
	cout << "how many numbers in the sequence: ";
	cin >> choice;
	double sequence[choice];
	for(int i = 0; i < sizeof(sequence)/sizeof(*sequence); i++) {
		cout << "Please input No. " << i + 1 << " number: ";
		cin >> sequence[i];
	}
	for(int i = sizeof(sequence)/sizeof(*sequence)-1; i >=0; i--) {
		cout << "No. " << i + 1 << " is " << sequence[i] << endl;
	}
	return 0;
}