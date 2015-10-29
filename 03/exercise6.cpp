#include "customerList.h"

int main() {
	struct customer cus1, cus2, cus3;
	cus1.next = &cus2;
	cus2.next = &cus3;
	cus3.next = NULL;
	cus1.name = "Stark";
	cus2.name = "Levin";
	cus3.name = "Jono";
	printCustomers(cus1);
	cout << "Length: " << listLength(cus1) << endl;
	return 0;
}