#include<stdio.h> 

char arr[10000]; //출력용배열 
int main(void) {
	int n;
	int i;
	
	scanf("%d",&n);
	
	for(i=0;n>0;i++) {
		//항상 A부터 시작함으로 0이 아닌 1부터 시작하는것과 같다
		arr[i]=(n-1)%26;  //n-1로 연산한다. 나머지를 넣고 
		n=(n-1)/26; //몫으로 바꾼다 
	}
	for(i=i-1;i>=0;i--) {
		printf("%c",arr[i]+65); //'A'의 아스키코드를 더해준다 
	}
}
