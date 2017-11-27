#include<stdio.h>

struct address {
	char name[20];
	char addr[80];
};

void input( struct address* data, int n) {
	int i;
	for(i=0;i<n;i++) {
		scanf("%s %s", (data+i)->name, (data+i)-> addr );
	}
}

void output( struct address* data, int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%s %s\n", (data+i)->name, (data+i)-> addr );
	}
}

int main(void) {
	struct address data[3];
	input(data,3);
	output(data,3);
}
