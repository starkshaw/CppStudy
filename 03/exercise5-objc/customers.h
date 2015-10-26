#import <Foundation/Foundation.h>

struct customer {
	NSString *name;
	struct customer *next;	
};

void print_customer(struct customer head);