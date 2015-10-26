#import <Foundation/Foundation.h>

void finalCount (void);
int countOfPrimeNum = 0, n = 0;

int main (int argc, char *argv[]) {
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	printf("How many number this array covered: ");
	scanf("%d", &n);
	n = n + 1;
	NSTimeInterval start = [[NSDate date] timeIntervalSince1970];
	bool numbers[n];
	for (int i = 0; i < sizeof(numbers); i++) {
		numbers[i] = true;
	}
	for (int i = 2; i < sizeof(numbers); i++) {
		for (int j = 2; ; j++) {
			int mul = i * j;
			if (mul > sizeof(numbers)) {
				break;
			} else if (mul < sizeof(numbers)) {
				numbers[mul] = false;
			}
		}
	}
	for (int i = 2; i < sizeof(numbers); i++) {
		if (numbers[i] == true) {
			countOfPrimeNum++;
			printf("%d ", i);
			if (countOfPrimeNum % 10 == 0) {
				printf("\n");
			}
		}
	}
	finalCount();
	NSTimeInterval end = [[NSDate date] timeIntervalSince1970];
	//printf("%f\n%f\n%f\n", start, end, end - start);
	double elapsed = (end - start) * 1000;
	printf("The answer took %d ms to compute.\n", (int)elapsed);
	[pool release];
	return 0;
}

void finalCount(void) {
	printf("\n\nThere ");
	if (countOfPrimeNum == 1) {
		printf("is 1 prime number, which is 2.\n");
	} else if (countOfPrimeNum > 1) {
		printf("are %d prime numbers from 2 to %d.\n", countOfPrimeNum, n-1);
	}
}