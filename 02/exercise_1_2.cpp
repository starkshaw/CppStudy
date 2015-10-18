#include <iostream>

using namespace std;

int gcd (int a, int b);

int main (int argc, char *argv[]) {
	int a, b, answer;
	cout << "Input the interger a: ";
	cin >> a;
	cout << "Input the interger b: ";
	cin >> b;
	answer = gcd(a,b);
	cout << "ANSWER: " << answer << endl;
	return 0;
}

int gcd (int a, int b) {
	int gcd;
	for(int i=1; i <= a && i <= b; i++){
		if(a % i==0 && b % i == 0 ){
			gcd=i;
		}
	}
	return gcd;
}