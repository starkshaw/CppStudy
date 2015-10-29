#include <iostream>

struct customer {
	std::string name;
	customer *next;	
};

void print_customer(customer &head);