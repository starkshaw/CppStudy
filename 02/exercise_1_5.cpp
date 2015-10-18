#include <iostream>

using namespace std;

void print_string_array(char str[]);
void print_string_ptr(char *str);

int main(int argc, char *argv[]) {
	char str[] = "Hello C++!";
	char *ptrToStr = str;
	print_string_array (str);
	print_string_ptr (ptrToStr);
	return 0;
}

void print_string_array(char str[]) {
	for (int i = 0; str[i]!='\0'; i++) {
		cout << str[i] << "\0" << " ";
	}
	cout << endl;
}

void print_string_ptr(char *str) {
	for (int i = 0; str[i]!='\0'; i++) {
		cout << *(str+i) << "\0" << " ";
	}
	cout << endl;
}