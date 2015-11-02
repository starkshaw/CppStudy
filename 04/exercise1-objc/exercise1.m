#import <Foundation/Foundation.h>
#import "die.h"

int main(int argc, char* argv[]) {
	srand(time(NULL));
	int simulationTimes = 100000;
	int result[simulationTimes];
	int sidesOfDie = 6;
	int amount[2*sidesOfDie-1];
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		amount [i] = 0;
	}
	die *monte = [[die alloc]initWithSidesOverFour: sidesOfDie];
	die *carlo = [[die alloc]initWithSidesOverFour: sidesOfDie];
	printf("Simulating...\n");
	for (int i = 0; i < simulationTimes; i++) {
		[monte roll];
		[carlo roll];
		result[i] = monte.point + carlo.point;
	}
	for (int i = 0; i < simulationTimes; i++) {
		amount[result[i]-2]++;
	}
	for (int i = 0; i < (sizeof(amount)/sizeof(*amount)); i++) {
		printf("%d\t%d\t%.3f%%\n", i+2, amount[i], (double)(amount[i])/(double)(simulationTimes)*100);
	}
	return 0;
}