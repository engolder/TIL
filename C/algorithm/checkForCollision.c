#include<stdio.h>

int main(void) {
	int x[3]; //x���� 3�� 
	int y[3]; //y���� 3�� 
	int i;
	int flag=0; //�浹���� 0 = �浹 
	
	for(i=0;i<3;i++) {
		scanf("%d %d",&x[i],&y[i]);
	}
	//�̻����� ����⸦ ����� ���浹 
	if(x[2]<x[0]||x[2]>x[1]) flag=1; 
	if(y[2]<y[0]||y[2]>y[1]) flag=1;
	
	if(!flag) printf("�浹");
	else printf("���浹"); 
	
}
