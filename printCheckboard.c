#include<stdio.h>

int main(void) {
	int w,h; //üũ ������ ũ�� 
	int bw,bh; //�� ĭ�� ũ�� 
	int i,j,k,l; //�ε��� 
	int s=1; //��� ��������� ����
	//1�̸� X,0�̸� .��� 
	
	scanf("%d %d",&h,&w);
	scanf("%d %d",&bh,&bw);
	
	if(w%2==1)s=0; //���� Ȧ����� �⺻�� 0 
	 
	for(i=0;i<h;i++) { //üũ���� �ุŭ�ݺ� 
		s=!s; //�� ĭ�� ����ϸ� s�� ������ 
		for(j=0;j<bh;j++) { //�� ĭ�� �ุŭ �ݺ� 
			if(w%2==1)s=!s; //Ȧ����� ������ 
			for(k=0;k<w;k++) { //üũ���� ����ŭ �ٺ� 
				s=!s;
				for(l=0;l<bw;l++) { //�� ĭ�� ����ŭ �ݺ� 
					if(s) printf("X");
					else printf(".");
				}
			}
			printf("\n"); //���� 
		}
	}
}
