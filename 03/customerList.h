#include <iostream>

using namespace std;

struct customer {
	std::string name;
	customer *next;	
};

customer* createList(string name);
void insertName(customer &head, string name);
int listLength(customer &head);
void printCustomers(customer &head);