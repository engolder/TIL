#include<stdio.h>

void Preorder(char tree[], int index) {
	if(tree[index] != '\0') {
		printf("%c ",tree[index]);
		Preorder(tree,index*2);
		Preorder(tree,index*2+1);
	}
}

void Inorder(char tree[], int index) {
	if(tree[index] != '\0') {
		Inorder(tree,index*2);
		printf("%c ",tree[index]);
		Inorder(tree,index*2+1);
	}
}

void Postorder(char tree[], int index) {
	if(tree[index] != '\0') {
		Postorder(tree,index*2);
		Postorder(tree,index*2+1);
		printf("%c ",tree[index]);
	}
}
int main(void) {
	char arr[100]={' ','A','B','C','D','E','F','G'};
	
	printf("\n전위 순회\n");
	Preorder(arr,1);
	
	printf("\n전위 순회\n");
	Inorder(arr,1);
	
	printf("\n전위 순회\n");
	Postorder(arr,1);
}
