#include<stdio.h>

char arr[100][100]; //n*n게임판 
char temp[100][100]; //SpinAndSlide를 위한 임시게임판 
int n;

int move(int j) {
	int i,l;
	char tmp; //임시 공간 
	
	//.의 존재가능 수 만큼 반복
	//최적화필요 
	for(l=0;l<n;l++) {
		
		//맨아래줄 부터 시작
		for(i=0;n-i-2>=0;i++) { 
			//만약 .이 있다면 최상위로 옮김
			//최적화필요 
			if(temp[n-i-1][j]=='.') {
				tmp=temp[n-i-1][j];
				temp[n-i-1][j]=temp[n-i-2][j];
				temp[n-i-2][j]=tmp;
			}
		}
	}
}

int main(void) {
	int i,j,k;
	int number; //SpinAndSlide 횟수 
	
	scanf("%d",&n);
	scanf("%d",&number);
	for(i=0;i<n;i++) {
		scanf("%s",&arr[i]);
	}
	
	for(k=0;k<number;k++) {
		
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				//게임판의 내용을 90도 회전시켜
				//임시게임판에 복사 
				temp[j][n-i-1]=arr[i][j];
			}
		}
		
		for(j=0;j<n;j++) { 
			//임시게임판의 열의 수 만큼
			//반복해서 함수호출 
			move(j);
		}
		
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				arr[i][j]=temp[i][j];
			}
		}
	}
	
	for(i=0;i<n;i++) {
		printf("%s\n",arr[i]);
		//출력 
	}
}
