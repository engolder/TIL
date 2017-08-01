#include<stdio.h>

int arr[4][4]; //입력받을 2차원배열 
int value[16]; //받은값을 저장할 1차원배열 
int main(void) {
	int n;
	int cnt=0; //2차원에서 1차원배열로 넘기고, 길이를 재기위함 
	int i,j,k;
	int s=0; //1차원 배열의 결과 요소가 한개인지 아닌지 검사 
	
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			scanf("%d",&arr[i][j]);
			//2차원으로 입력을 받고, 0이아니면 1차원배열로 
			if(arr[i][j]!=0) value[cnt++]=arr[i][j];
		}
	}
	
	for(k=0;k<cnt;k++) {
		//반복 
		for(i=0;i<cnt;i++) {
			//인덱스를 0부터 최대길이까지 
			for(j=0;j<cnt;j++) {
				//i의 인덱스와 j의 인덱스를 갖는 배열을 비교해서,
				//같으면 둘을 더해서 한곳에 저장 
				if(value[i]==value[j]&&i!=j) {
					value[i]=0;
					value[j]*=2;
					break;
				}
				//ex) 2204 -> 0404 -> 0008
			}
		}
	}
	for(i=0;i<cnt;i++) {
		if(value[i]) s++;
		//배열을 검사해서 요소가 1인지아닌지 확인 
	}
	if(s==1) printf("yes");
	else printf("no");
}
