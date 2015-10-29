#include <iostream>
using namespace std;

/*template<int N>
int getSize(double (&S1)[N]) {
   //N is the size of array
   int S_size1 = N;
   int S_size2 = sizeof(S1)/sizeof(double); //would be equal to N!!
   std::cout<<"array size(in function):"<<S_size1<<std::endl;
   //std::cout<<"array size(in function):"<<S_size2<<std::endl;
   return S_size1;
}

double *appendArray(double originArray[], double val) {
	double *appended = new double[5];
	return appended;
}

int main(int argc, char *argv[]) {
	int choice;
	double *test = new double[5];
	//double *addrOfTest = test;
    cout << sizeof(test)/sizeof(*test) << endl;
	//appendArray(test,4);
	//cout << test[5] << endl;
	delete test;
	return 0;
}*/

//double *appendArray(double *originArray, double appendValue);

/*int main(int argc, char *argv[]) {
	int length = 0;
	double* original; 
	double* appended;
	double input;
	for(;;) {
		cout << "Please input your data, -1 to exit: ";
		cin >> input;
		if(input==-1) {
			break;
		} else {
			original = new double[length];
			for(int i = 0; i < length; i++) {
				
			}
			length++;
			cout << "Length: " << length << endl;
			appended = new double[length];
			for(int i = 0; i < length-1; i++) {
				//appended[i] = (double*)&(original[i]);
				cout << "Original[" << i << "]: " << original[i] << endl;
			}
			appended[length-1] = input;
		}
	}
	for(int i=0; i<length; i++) {
		cout << "Original [" << i << "]: " << appended[i] << endl;
	}
	delete[] original;
	delete[] appended;
	return 0;
}*/

/*double *appendArray(double *originArray, double appendValue) {
	double* appended = new double[]
}*/

double* appendArray(double* originalArray, int sizeOfOriginalArray) {
	double* appended = new double[sizeOfOriginalArray++];
	return appended;
}

int main() {
	int size = 1;
	double* original;
	double* appending;
	double input;
	for(;;) {
		cout << "Please input your data, -1 to exit: ";
		cin >> input;
		if(input==-1) {
			break;
		} else {
			original = new double[size];
			appending = appendArray(original, size);
			if(sizeof(original)/sizeof(*original)==1) {
				original[0] = input;
			} else {
				//original[sizeof(original)/sizeof(*original)-1] = input;
				memcpy(appending, original, sizeof(original)/sizeof(*original));
				appending[sizeof(appending)/sizeof(*appending)-1]=input;
			}
			cout << "Original [" << size-1 << "]: " << original[size-1] << endl;
			cout << "Appending [" << size-1 << "]: " << appending[size-1] << endl;
		}
	}
	for(int i=0; i< sizeof(appending)/sizeof(*appending); i++) {
		cout << "Original [" << i << "]: " << appending[i] << endl;
	}
	delete[] original;
	delete[] appending;
	return 0;
}