#import <Foundation/Foundation.h>

struct individual {
	NSString *name;
	int age;
	struct individual *next;
};

void printNamelist(struct individual HEAD) {
	struct individual *cur = &HEAD;
	while (cur != NULL) {
		printf("%s (%d)\n", [cur->name UTF8String], cur->age);
		cur = cur->next;
	}
}

NSString* inputCStringToObjC() {
	NSString *output;
	char* str = (char*) malloc(100);
	scanf("%s", str);
	output = [NSString stringWithCString:str encoding:NSUTF8StringEncoding];
	free(str);
	return output;
}

int main() {
	@autoreleasepool{
	int amount = 0;
	printf("How many persons in this group? ");
	scanf("%d", &amount);
	struct individual namelist[amount];
	for(int i = 0; i < amount; i++) {
		printf("Name of No. %d: ", i+1);
		namelist[i].name = inputCStringToObjC();
		printf("Age of No. %d: ", i+1);
		scanf("%d", &namelist[i].age);
	}
	printf("Data input finished.\n");
	for(int i = 0; i < amount; i++) {
		if(i!=amount-1) {
			namelist[i].next = &(namelist[i+1]);
		} else {
			namelist[i].next = NULL;
		}
	}
	printNamelist(namelist[0]);
	return 0;
	}
}

