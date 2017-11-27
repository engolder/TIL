#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int dice[6];
int main(void) {
	int n;
	int randnum;
	float vari=0;
	float m=0;
	int i;
	
	srand(time(NULL));
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		dice[rand()%6]++;
	}
	
	for(i=0;i<6;i++) {
		m+= (i+1.0) * dice[i]/n;
	}
	
	for(i=0;i<6;i++) {
		vari+= (i+1-m)*(i+1-m) * dice[i]/n;
	}
	
	printf("평균 : %f\n",m);
	printf("분산 : %f\n",vari);
	printf("표준편차 : %f\n",sqrt(vari));
}
