#include<stdio.h>

int arr[5][5]; //빙고판 
int test[25]; //출력용 빙고판 

int f() {
	int flag=0; //완성된 줄의 수 
	int i,j;
	int s; //현재 검사하는 줄의 상태 
	for(i=0;i<5;i++) { 
		s=1;//1로 초기화 
		for(j=0;j<5;j++) { //한 가로줄이 모두 0이라면 
			if(arr[i][j]) s=0;
		}
		//완성된 줄의 수 +1 
		if(s) flag++;
		
		s=1;
		for(j=0;j<5;j++) { //한 세로줄이 모두 0이라면 
			if(arr[j][i]) s=0;
		}
		//+1
		if(s) flag++;
		 
	}
	
	s=1;//1로 초기화 
	for(i=0;i<5;i++) { //대각선 (왼쪽위에서 출발)이 0이라면 
		if(arr[i][i]) s=0;
	}
	//+1
	if(s) flag++;
	
	s=1;//1로 초기화 
	for(i=4;i>=0;i--) {//대각선 (오른쪽위에서 출발)이 0이라면 
		if(arr[i][4-i]) s=0;
	}
	//+1
	if(s) flag++;
	
	return flag; //완성된 줄의 갯수 리턴 
}

int main(void) {
	int i,j,k;
	
for(i=0;i<5;i++) { //빙고판 입력 
		for(j=0;j<5;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(k=0;k<25;k++) { //부르는 수 입력 
		scanf("%d",&test[k]);
	}
	
	for(k=0;k<25;k++) { //부른 수(k)만큼 반복 
		for(i=0;i<5;i++) { //빙고판전체 탐색 
			for(j=0;j<5;j++) {
				if(test[k]==arr[i][j]) break; //찾았다면 탈출 
			}
			if(test[k]==arr[i][j]) break; //탈출 
		}
		if(test[k]==arr[i][j]) arr[i][j] = 0; //0으로 초기화, 
		if(f()>=3) break; //빙고판의 완성된 줄이 3이상이라면 스톱 
	}
	printf("%d\n",k+1); //k+1로 출력 
}
