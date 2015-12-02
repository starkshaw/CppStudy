#include <iostream>
#include <vector>

using namespace std;

template <class T>
void print(vector<T> v){
	// Classical
	/*for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}*/
	
	// Syntax sugar
	/*for(T i : v) {
		cout << i << " ";
	}*/
	
	// Vector Iterator
	// auto is implicitly converted to vector<T>::iterator
	for(auto i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}

template <class T>
void print(T a, int i) {
	cout << a[i] << endl;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	print(intArray, 2);
	double doubleArray[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9};
	print(doubleArray, 7);
	string *stringArray = new string[3];
	stringArray[0] = "what";
	stringArray[1] = "the";
	stringArray[2] = "heck";
	print(stringArray, 2);
	vector<int> intVector;
	for (int i = 0; i < 5; i++) {
		intVector.push_back(i);
	}
	print(intVector);
	print(intVector, 2);
	delete[] stringArray;
	return 0;
}