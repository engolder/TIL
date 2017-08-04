#include<stdio.h>
#include<stdlib.h> //rand()함수를 사용하기위함 
#include<time.h>  //time()함수를 사용하기위함 

int lotto[6]; //입력받을 배열 
int randnum[6];
int main(void) {
	int i,j;
	int cnt=0; //일치한 수 
	int f=0; //중복 여부 
	
	printf("구입한 로또 번호 : ");
	for(i=0;i<6;i++) {
		scanf("%d",&lotto[i]); //6개 입력 
	}
	
	srand(time(NULL)); //매번 다른값이 나오도록 시드를 바꾸어줌 
	
	i=0; //인덱스 초기화 
	
	printf("추첨한 로또 번호 : ");
	while(i<6) {
		f=0; //상태 초기화 
		
		randnum[i]=(rand()%45)+1; //랜덤배열에 랜덤값을 주고 
		
		for(j=0;j<i;j++) {
			if(randnum[i]==randnum[j]) { //만약 이미 나왔던 수라면 
				f=1;
				break;
			}
		}
		if(f) continue; //재반복 
		
		//중복되지 않았다면 출력 
		printf("%d ",randnum[i]);
		
		for(j=0;j<6;j++)  { //랜덤의 숫자를 lotto의 값과 비교
			if(lotto[j]==randnum[i]) cnt++; //같다면 카운트+1
		}
		
		i++;
	}
	
	printf("\n일치하는 숫자의 개수 : %d",cnt);
}
