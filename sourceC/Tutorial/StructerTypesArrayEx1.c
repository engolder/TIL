#include<stdio.h>

struct person{
	int number;
	int money;
};

int main(void) {
	struct person funder[5];
	int max=0,king;
	int i;
	
	for(i=0;i<5;i++) {
		funder[i].number=i+1;
		printf("%d번 저축금액 : ",funder[i].number);
		scanf("%d",&funder[i].money);
		if(funder[i].money>max) {
			max = funder[i].money;
			king = i;
		}
	}
	
	printf("저축왕 : %d번 %d원",funder[king].number,funder[king].money);
}
