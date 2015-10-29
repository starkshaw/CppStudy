#include "customers.h"

using namespace std;

void print_customer(customer &head) {
	struct customer *cur = &head;
	while (cur != NULL) {
		cout << cur->name << endl;
		cur = cur->next;
	}
}