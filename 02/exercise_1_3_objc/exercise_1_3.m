#import <Foundation/Foundation.h>
#import <stdlib.h>

int roll ();

int main (int argc, char *argv[]) {
	srand (time(NULL));
	int simulationTimes = 100000;
	int result[simulationTimes];
	int amount[11];
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		amount [i] = 0;
	}
	printf("Simulating...\n");
	for (int i = 0; i < simulationTimes; i++) {
		int dice1 = roll();
		int dice2 = roll();
		result[i] = dice1 + dice2;
	}
	for (int i = 0; i < simulationTimes; i++) {
		amount[result[i]-2]++;
	}
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		printf("%d\t%d\t%.3f%%\n", i+2, amount[i], (double)(amount[i])/(double)(simulationTimes)*100);
	}
	return 0;
}

int roll () {
	return rand() % 6 + 1;
}