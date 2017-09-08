#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	char data;
	struct node* left;
	struct node* right;
}node;

node* makenode(char data, node* leftN, node* rightN) {
	node* N = (node *)malloc(sizeof(node));
	N->data=data;
	N->left=leftN;
	N->right=rightN;
}

void preorder(node* N) {
	if(N) {
		printf("%c ",N->data);
		preorder(N->left);
		preorder(N->right);
	}
}

int main(void) {
	node* n7 = makenode('G',NULL,NULL);
	node* n6 = makenode('F',NULL,NULL);
	node* n5 = makenode('E',NULL,NULL);
	node* n4 = makenode('D',NULL,NULL);
	node* n3 = makenode('C',n6,n7);
	node* n2 = makenode('B',n4,n5);
	node* n1 = makenode('A',n2,n3);
	
	printf("\npreorder :\n");
	preorder(n1);
}
