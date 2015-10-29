#include <iostream>

using namespace std;

struct individual {
	string name;
	int age;
	individual *next;
};

void printNamelist(individual &HEAD) {
	individual *cur = &HEAD;
	while (cur != NULL) {
		cout << cur->name << " (" << cur->age << ")" << endl;
		cur = cur->next;
	}
}

int main() {
	int amount = 0;
	cout << "How many persons in this group? ";
	cin >> amount;
	individual *namelist = new individual[amount];
	for(int i = 0; i < amount; i++) {
		cout << "Name for No. " << i+1 << ": ";
		cin >> namelist[i].name;
		cout << "Age of No. " << i+1 << ": ";
		cin >> namelist[i].age;
	}
	cout << "Data input finished." << endl;
	for(int i = 0; i < amount; i++) {
		if(i!=amount-1) {
			namelist[i].next = &(namelist[i+1]);
		} else {
			namelist[i].next = NULL;
		}
	}
	printNamelist(namelist[0]);
	delete[] namelist;
	return 0;
}

