#include<stdio.h>

int arr[27][27]; //25*25 필드, 1칸의 범위를 초과해서 범위하기때문에 양끝에 1씩+ 
int printarr[27][27]; //출력을 위한 필드 연산후의 필드가 저장됨 

int f(int i,int j){  //9칸을 확인하여 생명체의 수를 카운트해서 리턴함 
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
	
	for(i=1;i<26;i++) { //필드 입력 
		for(j=1;j<26;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=1;i<26;i++) { 
		for(j=1;j<26;j++) {
			
			//2차원배열을 하나씩확인하며
			//생명체가 아니라면 주변8칸 생명체가 3이면 생명체로 
			if(arr[i][j]==0) {
				if(f(i,j)==3) printarr[i][j]=1;
			} else {
				//생명체라면 주변 8칸 생명체가 2또는 3이면 생명체로 
				if(f(i,j)-1 == 2 || f(i,j)-1 == 3) printarr[i][j] = 1;
				else printarr[i][j] = 0;
			}
			//출력 
			printf("%d ",printarr[i][j]);
		}
		//개행 
		printf("\n");
	}
}
