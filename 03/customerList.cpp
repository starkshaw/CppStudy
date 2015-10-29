#include "customerList.h"

customer* createList(string name){
	struct customer* list;
	list->name = name;
	return list;
}

void insertName(customer &head, string name) {
	struct customer* cur = &head;
	struct customer* newCus;
	newCus->name = name;
	newCus->next = NULL;
	for(;;) {
		if(cur->next!=NULL) {
			cur = cur->next;
		} else {
			cur->next = newCus;
			break;
		}
	}
}

int listLength(customer &head) {
	int length = 0;
	customer *cur = &head;
	while (cur != NULL) {
		length++;
		cur = cur->next;
	}
	return length;
}

void printCustomers(customer &head) {
	customer *cur = &head;
	while (cur != NULL) {
		cout << cur->name << endl;
		cur = cur->next;
	}
}