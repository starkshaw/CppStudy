#include <iostream>

using namespace std;

int strLen(char str[]);
void strCat(char dest[], char src[], int dest_size);

int main(int argc, char *argv[]) {
	char test[] = "Hello world!!!";
	cout << strLen(test) << endl;
	return 0;
}

int strLen(char a[]) {
	int count = 0;
	while(1==1){
		if(a[count]=='\0'){
			break;	
		}
		count++;
	}
	return count;
}

void strCat(char dest[], char src[], int dest_size) {
	int i = 0;
	while(dest[i] != '\0') {
		i++;
	}
	for(int j = 0; j<dest_size; j++) {
			dest[i] = src[j];
			i++;
	}
	if(my_string_len(dest) != (my_string_len(src) + dest_size)) {
		cout << "Not enough space in the arrray" << endl;
	} else {
		cout << "String concatenated : " << dest << endl;
	}
}