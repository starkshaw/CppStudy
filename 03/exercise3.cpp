#include <iostream>

using namespace std;

struct individual {
	string name;
	int age;
};

int main() {
	int amount = 0;
	cout << "How many persons in this group? ";
	cin >> amount;
	individual *namelist = new individual[amount];
	for(int i = 0; i < amount;i++) {
		cout << "Name for No. " << i+1 << ": ";
		cin >> namelist[i].name;
		cout << "Age of No. " << i+1 << ": ";
		cin >> namelist[i].age;
	}
	cout << "Data input finished." << endl;
	for(int i = amount-1; i>=0; i--) {
		cout << namelist[i].name << " is " << namelist[i].age << " year(s) old." << endl;
	}
	delete[] namelist;
	return 0;
}

