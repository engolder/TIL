#include<stdio.h>

int main(void) {
	int a,b,c,d; //a,b(ù��° Į���� ��ǥ),c,d(�ι�°) 
	int i,cnt=0; //cnt : ��ħ�� ���� 
	
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	
	for(i=a;i!=b;i++) { //i�� 101�̵Ǹ� �ٽ� 1����(�����) 
		if(i>100) i-=100;
		if(i==c||i==d) cnt++; //a�� b���̿� c,d�� �ִٸ� ī��Ʈ + 
	}
	if(cnt==1) printf("cross");
	else printf("not cross");
}
