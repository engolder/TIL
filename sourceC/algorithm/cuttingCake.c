#include<stdio.h>

int main(void) {
	int a,b,c,d; //a,b(첫번째 칼질의 좌표),c,d(두번째) 
	int i,cnt=0; //cnt : 겹침의 여부 
	
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	
	for(i=a;i!=b;i++) { //i가 101이되면 다시 1부터(원모양) 
		if(i>100) i-=100;
		if(i==c||i==d) cnt++; //a와 b사이에 c,d가 있다면 카운트 + 
	}
	if(cnt==1) printf("cross");
	else printf("not cross");
}
