#include<stdio.h>

int arr[1000]; //n번째 행의 개미수열 한줄이 담기는곳 
int temp[1000]; //arr을 통해 다음 개미수열을 만드는곳 
int main(void) {
	int a,b; //a번째 행부터 b번째 행까지
	int i,j,k;
	int cnt=0;
	 
	scanf("%d %d",&a,&b);
	
	temp[0]=1; //초기 배열의 상태는 첫번째인덱스만 1로 
	
	for(i=1;i<=b;i++) {
		cnt=0; //매회 카운트를 초기화 
		for(j=0;temp[j]!=0;j++) { //temp의 길이만큼 반복 
			if(i>=a)printf("%d ",temp[j]); //a보다 행의 수가 크다면 출력 
			arr[j]=temp[j]; //temp를 arr로 옮김 
		}
		if(i>=a)printf("\n"); //개행 
		
		for(j=0;arr[j]!=0;) { //arr의 길이만큼 반복 
			
			for(k=j;arr[k]==arr[j];k++) {} 
			//k는 배열arr의 나열된 숫자중 연속된 같은숫자를 센다. 
			temp[cnt++]=arr[j]; //순서대로 연속된 숫자에서 그 숫자, 
			temp[cnt++]=k-j; //연속된 같은 숫자의 갯수를 temp에 넣는다.
			//cnt로 길이를 쌓음 
			j=k; //연속된 숫자를 센만큼 j의 인덱스를 증가 
			
			// ex) 배열 arr{1,1,2,2}인경우
			// 연속된 숫자 : 1이 2개, 2가 2개 
			// --> temp{1, , , }
			// --> temp{1,2, , }
			// --> temp{1,2,2, }
			// --> temp{1,2,2,2}
		}
		
	}
}
