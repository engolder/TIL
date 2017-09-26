#include<stdio.h>
#include<stdlib.h>

typedef struct train {
	int seats;
	struct train *next;
}Train;

void main() {
	Train *head=NULL, *tail;
	int i;
		
	for(i=0; i<3; i++) {
		if(head==NULL) head = tail = (Train*)malloc(sizeof(Train));
		else {
			tail -> next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
		scanf("%d",&tail->seats );
	} 
	tail -> next = NULL;
	tail = head;
	for(i=0;i<3;i++) {
		printf("%d\n",tail->seats);
		
		tail = tail -> next;
	}
}





