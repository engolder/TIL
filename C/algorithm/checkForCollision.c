#include<stdio.h>

int main(void) {
	int x[3]; //x변수 3개 
	int y[3]; //y변수 3개 
	int i;
	int flag=0; //충돌여부 0 = 충돌 
	
	for(i=0;i<3;i++) {
		scanf("%d %d",&x[i],&y[i]);
	}
	//미사일이 비행기를 벗어나면 비충돌 
	if(x[2]<x[0]||x[2]>x[1]) flag=1; 
	if(y[2]<y[0]||y[2]>y[1]) flag=1;
	
	if(!flag) printf("충돌");
	else printf("비충돌"); 
	
}
