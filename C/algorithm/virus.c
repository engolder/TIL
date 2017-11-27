#include<stdio.h>

int arr[1000][2]; //연결상태를 입력받는 2차원배열 
int comf[1000]; //n번째 컴퓨터의 상태 1은 감염, 0 은 비감염 
int main(void) {
	int computer; //컴퓨터의 갯수 
	int couple; //연결된 컴퓨터의 수 
	int i,j;
	int cnt=0; //감염된 컴퓨터의 수 
	
	scanf("%d",&computer);
	scanf("%d",&couple);
	
	for(i=0;i<couple;i++) {
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	}
	
	comf[1] = 1; //첫번째 컴퓨터는 감염 
	
	for(i=0;i<couple;i++) { 
		for(j=0;j<couple;j++) {
			//연결 상태에서 하나라도 감염된 컴퓨터라면 둘다 감염시킨다 
			if(comf[ arr[j][0] ] == 1 || comf[ arr[j][1] ] == 1 ) {
				comf[ arr[j][0] ]=comf[ arr[j][1] ]=1;
			}
		}
	}//반복 

	for(i=2;i<=computer;i++) {
		if(comf[i]==1) cnt++;
	}//갯수를 샘 
	printf("%d",cnt);
}
