#include<stdio.h>

int Add (int a,int b) {
	printf("%d",a+b);
}
int Sub (int a,int b) {
	printf("%d",a-b);
}
int main(void) {
	int (*func)(int,int);
	int n1,n2,mod;
	
	scanf("%d %d %d",n1,n2,mod);
	
	func = (mod)?Add:Sub;
	func(n1,n2);
}
