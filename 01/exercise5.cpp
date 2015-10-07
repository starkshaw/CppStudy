#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Declaration
void finalCount (void);
int countOfPrimeNum = 0, n = 0;

int main (int argc, char *argv[]) {
	typedef std::chrono::high_resolution_clock Time;
    typedef std::chrono::milliseconds ms;
    typedef std::chrono::duration<float> fsec;
	cout << "How many number this array covered: ";
	cin >> n;
	n = n + 1;
	auto start = Time::now();
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
			cout << i << " ";
			if (countOfPrimeNum % 10 == 0) {
				cout << endl;
			}
		}
	}
	
	finalCount();
	auto end = Time::now();
	fsec elapsed = end - start;
    ms d = duration_cast<ms>(elapsed);
    //std::cout << elapsed.count() << "s\n";
    //std::cout << d.count() << "ms\n";
	cout << "The answer took " << d.count() << " ms to compute." << endl;
	return 0;
}

void finalCount(void) {
	cout << "\n\nThere ";
	if (countOfPrimeNum == 1) {
		cout << "is 1 prime number, which is 2." << endl;
	} else if (countOfPrimeNum > 1) {
		cout << "are " << countOfPrimeNum << " prime numbers from 2 to " << (n-1) << endl;
	}
}