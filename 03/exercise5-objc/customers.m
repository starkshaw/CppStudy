#import "customers.h"

void print_customer(struct customer head) {
	struct customer *cur = &head;
	while (cur != NULL) {
		printf("%s\n", [cur->name UTF8String]);
		cur = cur->next;
	}
}