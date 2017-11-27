#include<stdio.h>

struct address {
	char name[20];
	int age;
	char addr[80];
};

void input( struct address* data, int n) {
	int i;
	for(i=0;i<n;i++) {
		scanf("%s %d %s", (data+i)->name, &(data+i)->age, (data+i)-> addr );
	}
}

void output( struct address* data) {
	if(strcmp(data->name, (data+1)->name) > 0) {
		printf("이름 : %s 나이 : %d 전화번호 : %s", (data+1)->name, (data+1)->age, (data+1)-> addr);
	} else {
		printf("이름 : %s 나이 : %d 전화번호 : %s", (data)->name, (data)->age, (data)-> addr);
	}
}

int main(void) {
	struct address data[2];
	input(data,2);
	output(data);
}
