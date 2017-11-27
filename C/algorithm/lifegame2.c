#include<stdio.h>

int arr[172][172]; //최대 170까지의 필드, 초과범위 2+ 
int printarr[172][172]; //출력을 위한 필드, temp값으로도 사용됨 

int f(int i,int j){ //설명 생략 
	int k,l;
	int cnt=0;
	
	for(k=-1;k<2;k++) {
		for(l=-1;l<2;l++) {
			if(arr[i+k][j+l]==1) cnt++;
		}
	}
	return cnt;
}

int main(void) {
	int i,j;
	int a,b;
	int x,y,z;
	int k;
	
	//행,열 
	scanf("%d %d",&a,&b);
	//생명체가 생겨날 조건, 생명체가 유지될 조건, 생명체가 죽을 조건 
	scanf("%d %d %d",&x,&y,&z);
	
	for(i=1;i<=a;i++) {
		for(j=1;j<=b;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	scanf("%d",&k);
	while(k>0) { //k번 반복 (k)세대 까지 
		for(i=1;i<=a;i++) {
			for(j=1;j<=b;j++) {
				
				//생명체가 아니라면, 주변을 검사하여 수가 x라면 생명체로. 
				if(arr[i][j]==0) {
					if(f(i,j)==x) printarr[i][j]=1;
				} else {
					//생명체라면, 주변을 검사하여 y보다 크고 z보다 작은 수라면 생명유지 
					if(f(i,j)-1 >= y && f(i,j)-1 < z) printarr[i][j] = 1;
					//아니라면 죽음 
					else printarr[i][j] = 0;
				}	
			}
		}
		for(i=1;i<=a;i++) {
			for(j=1;j<=b;j++) {
				//한 세대가 진화되면, printarr을 arr로 다시옮겨서 반복 
				arr[i][j]=printarr[i][j];
			}
		}
		k--; //k를 감소 
	}
	for(i=1;i<=a;i++) {
		for(j=1;j<=b;j++) {
			printf("%d ",printarr[i][j]);
		}
		printf("\n");
	}
	
}
