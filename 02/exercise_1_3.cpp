#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll ();

int main (int argc, char *argv[]) {
	srand (time(NULL));
	int simulationTimes = 100000;
	int result[simulationTimes];
	int amount[11];
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		amount [i] = 0;
	}
	cout << "Simulating..." << endl;
	for (int i = 0; i < simulationTimes; i++) {
		int dice1 = roll();
		int dice2 = roll();
		result[i] = dice1 + dice2;
	}
	for (int i = 0; i < simulationTimes; i++) {
		amount[result[i]-2]++;
	}
	/* Test */
	/*for (int i = 0; i < simulationTimes; i++) {
		cout << result[i] << endl;
	}*/
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		cout << i+2 << "\t" << amount[i] << "\t" << (double)(amount[i])/(double)(simulationTimes)*100 << "%" << endl;
	}
	//cout << sizeof(result)/sizeof(*result) << " " << sizeof(amount)/sizeof(*amount) << endl;
	return 0;
}

int roll () {
	return rand() % 6 + 1;
}