#include "die.h"

using namespace std;

int main(int argc, char* argv[]) {
	srand(time(NULL));
	int simulationTimes = 100000;
	int result[simulationTimes];
	int sidesOfDie = 6;
	int amount[2*sidesOfDie-1];
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		amount [i] = 0;
	}
	die monte(sidesOfDie);
	die carlo(sidesOfDie);
	cout << "Simulating..." << endl;
	for (int i = 0; i < simulationTimes; i++) {
		monte.roll();
		carlo.roll();
		result[i] = monte.getValue() + carlo.getValue();
	}
	for (int i = 0; i < simulationTimes; i++) {
		amount[result[i]-2]++;
	}
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		cout << i+2 << "\t" << amount[i] << "\t" << (double)(amount[i])/(double)(simulationTimes)*100 << "%" << endl;
	}
	return 0;
}