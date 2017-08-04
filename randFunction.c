#include<stdio.h>
#include<stdlib.h> //rand()함수를 사용하기위함 
#include<time.h>  //time()함수를 사용하기위함 

int lotto[6]; //입력받을 배열 
int main(void) {
	int i,j;
	int rnd;
	int cnt=0; //일치한 수 
	
	printf("구입한 로또 번호 : ");
	for(i=0;i<6;i++) {
		scanf("%d",&lotto[i]);
	}
	
	srand(time(NULL)); //매번 다른값이 나오도록 시드를 바꾸어줌 
	
	printf("추첨한 로또 번호 : ");
	for(i=0;i<6;i++) {
		rnd=(rand()%45)+1;
		printf("%d ",rnd);
		for(j=0;j<6;j++)  { //랜덤의 숫자를 lotto의 값과 비교한다 
			if(lotto[j]==rnd) cnt++; //같다면 카운트+1 
		}
	}
	
	printf("\n일치하는 숫자의 개수 : %d",cnt);
}
