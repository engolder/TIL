#include<stdio.h>
#include<stdlib.h> //rand()�Լ��� ����ϱ����� 
#include<time.h>  //time()�Լ��� ����ϱ����� 

int lotto[6]; //�Է¹��� �迭 
int main(void) {
	int i,j;
	int rnd;
	int cnt=0; //��ġ�� �� 
	
	printf("������ �ζ� ��ȣ : ");
	for(i=0;i<6;i++) {
		scanf("%d",&lotto[i]);
	}
	
	srand(time(NULL)); //�Ź� �ٸ����� �������� �õ带 �ٲپ��� 
	
	printf("��÷�� �ζ� ��ȣ : ");
	for(i=0;i<6;i++) {
		rnd=(rand()%45)+1;
		printf("%d ",rnd);
		for(j=0;j<6;j++)  { //������ ���ڸ� lotto�� ���� ���Ѵ� 
			if(lotto[j]==rnd) cnt++; //���ٸ� ī��Ʈ+1 
		}
	}
	
	printf("\n��ġ�ϴ� ������ ���� : %d",cnt);
}
